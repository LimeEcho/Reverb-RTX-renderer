// camera.h
#pragma once

#ifndef CAMERA
#define CAMERA
#include "ray.h"
#include "hittable.h"
typedef struct material{
	char mat_type;
	float fuzz;
	float *RGB;
} material;

material add_mat (char, float *, ...);
void add_obj(float *, float, material);
void initalize (void);
float *ray_col (ray *, world *, int);
void render (world *);
#endif