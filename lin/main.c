#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define WIDTH 480
#define HEIGHT 272

#include <X11/extensions/XShm.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include "../videoData.h"
#include "decom.c"
#include <unistd.h>

#define INTERVAL_MICROSECONDS 100000 // 100 milliseconds in microseconds

// Function to send a custom event
void sendCustomEvent(Display *display, Window root) {
    XKeyEvent keyEvent;
    keyEvent.type = KeyPress;
    keyEvent.display = display;
    keyEvent.window = root;
    keyEvent.root = root;
    keyEvent.subwindow = None;
    keyEvent.time = CurrentTime;
    keyEvent.x = 1;
    keyEvent.y = 1;
    keyEvent.x_root = 1;
    keyEvent.y_root = 1;
    keyEvent.same_screen = True;
    keyEvent.keycode = XKeysymToKeycode(display, XK_space);

    XSendEvent(display, root, True, KeyPressMask, (XEvent *)&keyEvent);
    XFlush(display);
}



int main() {
    Display *display;
    XVisualInfo vinfo;
    XSetWindowAttributes attr;
    Window window;
    GC gc;
    XShmSegmentInfo shminfo;
    XImage *image;
    int screen;



    display = XOpenDisplay(NULL);
    if (display == NULL) {
        fprintf(stderr, "Cannot open display\n");
        exit(1);
    }

    screen = DefaultScreen(display);

    XMatchVisualInfo(display, screen, 32, TrueColor, &vinfo);
    attr.colormap = XCreateColormap(display, RootWindow(display, vinfo.screen), vinfo.visual, AllocNone);
    attr.border_pixel = 0;
    attr.event_mask = ExposureMask | KeyPressMask;

    window = XCreateWindow(display, RootWindow(display, vinfo.screen), 0, 0, WIDTH, HEIGHT,
                           0, vinfo.depth, InputOutput, vinfo.visual,
                           CWBorderPixel | CWColormap | CWEventMask, &attr);

    XMapWindow(display, window);

    XShmQueryExtension(display);  // Check if XShm extension is available

    XFlush(display);  // Ensure all X requests are processed before continuing

    // Create shared memory for the image
    image = XShmCreateImage(display, vinfo.visual, vinfo.depth, ZPixmap, NULL, &shminfo, WIDTH, HEIGHT);

    shminfo.shmid = shmget(IPC_PRIVATE, image->bytes_per_line * image->height, IPC_CREAT | 0777);
    shminfo.shmaddr = image->data = shmat(shminfo.shmid, 0, 0);
    shminfo.readOnly = False;

    XShmAttach(display, &shminfo);

    // Graphics context for drawing
    gc = XCreateGC(display, window, 0, 0);

    int index = 0;
    char* sout = (char*)malloc(18652+10);


    while (1) {
        XEvent event;
        XNextEvent(display, &event);


        if (index+2 < sizeof(xtable)/sizeof(int)){
            if (xtable[index] != 0){
                
                xdump((char*)xtable[index], xtable[index+1], image->data, sout);
                
                

                
                XShmPutImage(display, window, gc, image, 0, 0, 0, 0, WIDTH, HEIGHT, False);
            }
            index+=2;
            fprintf(stderr, "Index %i\n", index);
        }


        

        // Force to run often
        sendCustomEvent(display, window);

        // Sleep for the specified interval (100 milliseconds)
        usleep(INTERVAL_MICROSECONDS);
    }


    XShmDetach(display, &shminfo);
    XDestroyImage(image);
    XFreeGC(display, gc);
    XDestroyWindow(display, window);
    XCloseDisplay(display);

    return 0;
}
