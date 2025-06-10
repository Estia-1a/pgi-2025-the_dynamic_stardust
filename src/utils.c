#include <estia-image.h>

#include "utils.h"

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ){
    return (pixelRGB*)&data[(y * width + x) * 3];
}

int print_pixel(unsigned int width, unsigned x, unsigned y) {
    pixelRGB *pixel = get_pixel(data, width, height, x, y, n);
    printf("Pixel (%d, %d): R=%d, G=%d, B=%d\n", x, y, pixel->R, pixel->G, pixel->B)
}

int setPixel(){

}

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */

