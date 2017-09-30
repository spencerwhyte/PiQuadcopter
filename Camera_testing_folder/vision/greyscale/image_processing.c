#include "image_processing.h"
#include "greyscale.h"

gs_pixel* image_processing(rgb_pixel* raw_image) {
	// Step 1: convert to grey scale
	gs_pixel *gs_image;
	make_greyscake(raw_image, gs_image, image_height,image_width);
	// Step 2: guasian smoothing
	// Step 3: sobel
	// Step 4: canny
	// Step 5: profit.
	return gs_address;
}