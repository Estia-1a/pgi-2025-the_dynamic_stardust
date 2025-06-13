#include <estia-image.h>
#include <stddef.h>
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ) {
}

void print_pixel(const char *filename, int x, int y) {
}

void second_line(char *source_path){
    int height, width,m, channel_count ;
    unsigned char *data ;
    m= read_image_data(source_path,*data, width, height, channel_count) ;
    if (m==0){
        fprintf("Erreur lecture de l'image");
    }
    else{
        printf("print_pixel (%d, %d): %d, %d, %d\n", x, y, pix->R, pix->G, pix->B);
    }
}

int setPixel(){
    return 0;
}

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */
