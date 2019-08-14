#pragma once
#include "greyscale_image.h"
#include "gaussian_matrix.h"
#include "matrix_operations.h"

void apply_gauss_blur(greyscale_image* image, greyscale_image* gs_smooth);
