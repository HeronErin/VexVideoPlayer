#pragma once
#include <stdint.h>

// Hex FF FF FF FF for 1 as most least sig bit, else 0
// Mimic pixel struct


void xdump(const char* input, size_t size, char* big_out, char* small_out){
  // Decompression algerithm 
  uint8_t* small_out_itr = small_out;
  uint8_t lbyte = 0;
  while (size--){
    uint8_t b = *(input++);
    if (128 & b){
        b &= 127;
        while (b--) *(small_out_itr++) = lbyte;
    }else{
      *(small_out_itr++) = b;
      lbyte = b;
    }
  }
  size_t dif = ((size_t)small_out_itr)-((size_t)small_out);
  
  while (dif--){
    uint8_t b = *(small_out++);
    uint8_t mask = 1;
    while (mask != 128){
      *(uint32_t*)big_out = ((b & mask)==0)-1;
      mask*=2;
      big_out+=4;
    }
    
    

  }
  // FILE* fp = fopen("out.dat", "w");
  // fwrite(small_out, ((size_t)small_out_itr)-((size_t)small_out), 1, fp);
  // fclose(fp);

  // fprintf(stderr, "With a dif of %i\n", ((size_t)small_out_itr)-((size_t)small_out));
}