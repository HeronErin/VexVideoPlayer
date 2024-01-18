/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       mitchell                                                  */
/*    Created:      12/11/2023, 11:32:27 AM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "../include/vex.h"
#include  <time.h>
using namespace vex;


// Copyright (C) 2024 HeronErin
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 3 of the
// License, or (at your option) any later version.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

uint8_t comp[1024*1024] = {};
uint32_t out_dat[420*272] = {};

// define your global instances of motors and other devices here


int main() {
    if (!Brain.SDcard.isInserted()){Brain.Screen.print("SDCard not found!"); exit(-1);}
    if (!Brain.SDcard.exists("vid.dat")){Brain.Screen.print("vid.dat not found!"); exit(-1);}
    FILE* fp = fopen("vid.dat", "r");


    uint32_t vidTableSize = 0;
    fread(&vidTableSize, 4, 1, fp);


    
    int decomSize = 0;
    int x;
    int frameIndex=4 ;
    // uint32_t* out_dat =(uint32_t*)malloc();

    int counter = 0;

    while(frameIndex < vidTableSize){
        clock_t begin = clock();

        uint8_t* decompBuffer;
        uint32_t i;
        int mask;
        // uint8_t* comp = nullptr;
        // Brain.Screen.clearScreen(vex::black);
        uint32_t coloff = 0;
        uint32_t colsize = 0;
        
        READRR:
        fseek(fp, frameIndex, SEEK_SET);
        fread(&coloff, sizeof(uint32_t), 1, fp);
        fread(&colsize, sizeof(uint32_t), 1, fp);
        
        if (colsize == 0){
            fp = fopen("vid.dat", "r");
            goto READRR;
        }

        // Brain.Screen.print(colsize);
        // Brain.Screen.newLine();
        // Brain.Screen.print(coloff);
        // Brain.Screen.newLine();
        
        frameIndex+=8;
        
        // comp = (uint8_t*)realloc(comp, colsize); // Be sure buffer is large enough
        fseek(fp, coloff, SEEK_SET);
        fread(comp, colsize, 1, fp);
        

        x=0;
        for (i = 0; i < colsize; i++)
            // Black with white with max alpha
            for (mask = 1; mask < 128*2; mask*=2)
                out_dat[x++] = ((comp[i] & mask) == 0) ? 0 : -1;
        

        
        Brain.Screen.drawImageFromBuffer( out_dat, 0, 0, 480, 250 );

        
        clock_t end = clock();
        int wt = 75-(end-begin);
        Brain.Screen.printAt(100, 100, "%x  %x %x %f", wt, frameIndex, colsize, ((float)frameIndex)/8/10);

        wait(wt, msec);
        counter++;
        // break;
        

    }


    fclose(fp);

}
