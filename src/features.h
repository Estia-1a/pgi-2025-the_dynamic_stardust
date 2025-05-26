#ifndef FEATURES_H
#define FEATURES_H

void helloWorld();
int read_image_data(const char *filename, unsigned char **data, int *width, int *height, int *channel_count);
int write_image_data(const char *filename, unsigned char *data, int width, int height);


#endif
