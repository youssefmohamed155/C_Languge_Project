//
//  function.h
//  Vehicle Control system
//
//  Created by Youssef on 01/10/2023.
//

#ifndef function_h
#define function_h

#define WITH_ENGINE_TEMP_CONTROLLER 1

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define true 1
#define false 0

#define NULL_PTR ((void *)0)

typedef unsigned char ui8;       // +
typedef signed char si8;         // _ & +
typedef unsigned short ui16;     //%hi
typedef signed short si16;       //%hu
typedef unsigned long ui32;      //%u
typedef signed long si32;        //%d    = int
typedef unsigned long long ui64; //%lu
typedef signed long long si64;   //%li
typedef float f32;               //%f
typedef double d64;              // %lf

void off_vehicle_engine(void);
void on_vehicle_engine(void);
#endif /* function_h */
