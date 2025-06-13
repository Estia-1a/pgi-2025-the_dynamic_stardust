#include <estia-image.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ) {
}

void print_pixel(const char *filename, int x, int y) {
}

void second_line(char *source_path){
    int height, width,m,channel_count ;
    unsigned char **data ;
    m= read_image_data(source_path, data,&width,&height,&channel_count) ;
    if (m==0){
        perror("Erreur lecture de l'image");
    }
    else {
        printf("second_line: %d, %d, %d", *data[3*width],*data[3*width+1],*data[3*width+2]) ;
    }
    free_image_data(*data);
}

void tenth_pixel (char *source_path){
    int height, width,m,channel_count ;
    unsigned char **data ;
    m= read_image_data(source_path, data,&width,&height,&channel_count) ;
    if (m==0){
        perror("Erreur lecture de l'image");
    }
    else {
        printf("tenth_pixel: %d, %d, %d", *data[27],*data[28],*data[29]) ;
    }
    free_image_data(*data);
}


int setPixel(){
    return 0;
}

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */