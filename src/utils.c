#include <estia-image.h>
#include <stddef.h>
#include "utils.h"

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ) {
    if (!data || x >= width || y >= height || n < 3) {
        return NULL;
    }

    unsigned int index = (y * width + x) * n;
    return (pixelRGB *)&data[index];
}

void print_pixel(char *filename, int x, int y, ) {
    int rid, width, height;
    rid=read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *channel_count)
    return (pixelRGB *) &data[ /* TO COMPLETE */] ;
}

int setPixel(){
    return 0;
}

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */


