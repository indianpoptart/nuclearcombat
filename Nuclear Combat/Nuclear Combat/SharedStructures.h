//
//  SharedStructures.h
//  Nuclear Combat
//
//  Created by Nikhil Paranjape on 12/3/15.
//  Copyright (c) 2015 Nikhil Paranjape. All rights reserved.
//

#ifndef SharedStructures_h
#define SharedStructures_h

#include <simd/simd.h>

typedef struct
{
    matrix_float4x4 modelview_projection_matrix;
    matrix_float4x4 normal_matrix;
} uniforms_t;

#endif /* SharedStructures_h */

