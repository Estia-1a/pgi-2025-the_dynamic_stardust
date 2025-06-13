#include <estia-image.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ) {
    return (pixelRGB *)&data[index];
}

void print_pixel(const char *filename, int x, int y) {
    unsigned char **data; int width, height, n;
    if (read_image_date(filename, &data, &width, &height, &n)) return;
    pixelRGB *pixel = get_pixel(data, width, height, x, y, n);
    if (pixel) printf("Pixel (%d, %d): R=%d, G=%d, B=%d\n", x, y, pixel->R, pixel->G, pixel->B);
    free(*data);
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


