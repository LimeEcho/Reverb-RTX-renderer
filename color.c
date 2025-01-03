// color.c
#include <math.h>
#include "headers/color.h"
#include "headers/vec3.h"
#include "headers/ray.h"
#include <stdio.h>
extern FILE *file;
float li2ga (float li){
	if (li > 0)
		return sqrt (li);
	return 0;
}

void wt_c (float *color){
	float r = li2ga (rx (color));
	float g = li2ga (ry (color));
	float b = li2ga (rz (color));
	interval intensity;
	intensity.tmin = 0.0;
	intensity.tmax = 0.9;
	int R = (int)(256 * clamp (intensity, r));
	int G = (int)(256 * clamp (intensity, g));
	int B = (int)(256 * clamp (intensity, b));
	fprintf (file, "%d %d %d\n", R, G, B);
}
