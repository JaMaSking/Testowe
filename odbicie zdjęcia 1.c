#include "bmp_io.h"

#define WIDTH 1000
#define HEIGHT 1000

void mirror(unsigned char image[HEIGHT][WIDTH]) {
    for (int row = 0; row < HEIGHT; row++) {
        for (int col = 0; col < WIDTH / 2; col++) {
            // Swap pixels on the left with those on the right for a mirror effect
            unsigned char temp = image[row][col];
            image[row][col] = image[row][WIDTH - col - 1];
            image[row][WIDTH - col - 1] = temp;
        }
    }
}

int main() {
    unsigned char image[HEIGHT][WIDTH];

    read_bmp("../buty.bmp", (unsigned char *) image, HEIGHT, WIDTH);
    // Read the input BMP image and store it in the image array

    mirror(image); // Create the mirror effect

    write_bmp("../output.bmp", (unsigned char *) image, HEIGHT, WIDTH);
    // Write the resulting mirrored image to a new BMP file

    return 0;
}
