#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h> // SDL2 library for graphics

#define SCREEN_WIDTH 480
#define SCREEN_HEIGHT 272
#define FPS 10 // Frames per second

// Function to decompress frames (similar to the Python xDecompress function)
unsigned char* xDecompress(unsigned char* bytez, int bytez_len, int* out_len) {
    unsigned char* out = (unsigned char*)malloc(SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(unsigned char));
    int index = 0;
    for (int i = 0; i < bytez_len; ++i) {
        if (bytez[i] >= 128) {
            int count = bytez[i] & 127;
            for (int j = 0; j < count; ++j) {
                out[index++] = bytez[i + 1];
            }
            i++;
        } else {
            out[index++] = bytez[i];
        }
    }
    *out_len = index;
    return out;
}

int main() {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Create window
    SDL_Window* window = SDL_CreateWindow("Video Player", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    // Read the compressed file
    FILE* file = fopen("b_frames/1005.png.bin", "rb");
    if (file == NULL) {
        printf("Could not open the file!\n");
        return -1;
    }

    // Get the file size
    fseek(file, 0, SEEK_END);
    int fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Allocate memory to store file data
    unsigned char* compressedData = (unsigned char*)malloc(fileSize);
    fread(compressedData, 1, fileSize, file);
    fclose(file);

    // Decompress the data
    int decompressedSize;
    unsigned char* decompressedData = xDecompress(compressedData, fileSize, &decompressedSize);

    // Free the compressed data
    free(compressedData);

    // Event handler
    SDL_Event event;
    int quit = 0;

    // Frame display timing
    Uint32 frameStartTime, frameEndTime, frameTime;

    // Display loop
    while (!quit) {
        frameStartTime = SDL_GetTicks();

        // Handle events on queue
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = 1;
            }
        }

        // Clear screen
        SDL_RenderClear(renderer);

        // Create texture
        SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_MONO8, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

        SDL_UpdateTexture(texture, NULL, decompressedData, SCREEN_WIDTH);

        // Render texture
        SDL_RenderCopy(renderer, texture, NULL, NULL);

        // Destroy texture
        SDL_DestroyTexture(texture);

        // Update screen
        SDL_RenderPresent(renderer);

        // Frame delay to achieve desired FPS
        frameEndTime = SDL_GetTicks();
        frameTime = frameEndTime - frameStartTime;
        if (frameTime < 1000 / FPS) {
            SDL_Delay((1000 / FPS) - frameTime);
        }
    }

    // Free decompressed data
    free(decompressedData);

    // Destroy renderer and window
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    // Quit SDL subsystems
    SDL_Quit();

    return 0;
}
