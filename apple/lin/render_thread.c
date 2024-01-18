#include "../videoData.h"
#include "decom.c"
#include <unistd.h>
static char stopped = 0;


void* secound_main(void* data){
	char* sout = (char*)malloc(18652+10); // Size of compressed screen buffer plus padding
	time_t lframe = time(NULL);
	int index = 0;


	while (index+2 < sizeof(seek_data)/sizeof(int)){
		xdump(seek_data[index]+image_buffer, seek_data[index+1], data, sout);
		((uint32_t*)data)[index] = 0xFF00FFFF;

		usleep(100000);
		index+=2;
	}



	free(sout);
}


