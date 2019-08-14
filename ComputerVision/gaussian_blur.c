#include "gaussian_blur.h"

// note: we will want to change the parameters passed into the gauss_matrix function in the future to see if different variances or matrix sizes change the detection algorithms
void apply_gauss_blur(greyscale_image* rough_image, greyscale_image* smooth_image) {
    matrix gaussian_matrix = gauss_matrix(1, 5);
    convolve(rough_image, smooth_image, &gaussian_matrix);
    destroy_matrix(&gaussian_matrix);
}
