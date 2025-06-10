#include <estia-image.h>

#include "utils.h"

pixelRGB * get_pixel( unsigned char* data, const unsigned int width, const unsigned int height, const unsigned int n, const unsigned int x, const unsigned int y ) {
    if (!data || x >= width || y >= height || n < 3) {
        return NULL
    }

    unsigned int index = (y * width + x) * n;
    return (pixelRGB *)&data[index];
}

void print_pixel(const char *filename, int x, int y) {
    unsigned char *d; int width, height, n;
    if (read_image_date(filename, &data, &width, &height, &n)) return;
    pixelRGB *pixel = get_pixel(data, width, height, x, y, n);
    if (pixel) printf("Pixel (%d, %d): R=%d, G=%d, B=%d\n", x, y, pixel->R, pixel->G, pixel->B);
    free(data)
}


int setPixel(){
    return 0
}

/**
 * @brief Here, you have to define functions of the pixel struct : getPixel and setPixel.
 * 
 */


