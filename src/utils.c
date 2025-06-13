#include <estia-image.h>
#include <stddef.h>
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ) {
    if (x >= width || y >= height) {
        return NULL;
    }
    else if (data == NULL){
        return NULL;
    }
    else{
        return (pixelRGB *)&data[(y * width + x) * n];
    }
}

// si x et y sont hors des limites de l'image on retourne rien
// si on ne trouve pas l'image on retourne rien
// sinon on renvoie l'adresse du pixel


void print_pixel(char *filename, int x, int y) {
    unsigned char *data
    int rid, width, height, channel_count;
    rid=read_image_data(filename, *data, width, height, channel_count);
    if (rid == NULL) {
        return NULL;
    }
    pix = pixelRGB * get_pixel( *data, width, height, n, x, y);
    else if (pix==NULL){
        return;
    }
    else{
        printf("print_pixel (%d, %d): %d, %d, %d\n", x, y, R, G, B);
    }
}

int setPixel(){
    return 0;
}

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */


