#pragma once

typedef struct rgb_pixel {
        uint8_t red;
        uint8_t green;
        uint8_t blue;
} rgb_pixel;


typedef struct gs_pixel {
	uint16_t pixel;
} gs_pixel;


gs_pixel* image_processing(rgb_pixel* raw_image);
