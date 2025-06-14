#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"

/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World 6 !");
}

void dimension (char *source_path){
    int width, height, channel_count, m ;
    unsigned char **data;
    m=read_image_data(source_path,data,&width,&height,&channel_count);
    if (m==0){
        perror("Erreur de lecture de l'image");
    }
    else{
        printf("dimension: %d, %d", width, height);
    }
}
