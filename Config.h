//
// Created by marc on 13/08/2021.
//


// In this file, you can adjust how the engine works

#ifndef RAYTRACING_RAYMARCHING_HYBRID_CONFIG_H
#define RAYTRACING_RAYMARCHING_HYBRID_CONFIG_H

// Whether the engine should cull faces that face away from the camera
#define DO_BACKFACE_CULLING

#define SAMPLES 32

#define MAX_BOUNCE_COUNT 18

#define CLEARANCE_DIST 0.001

#endif //RAYTRACING_RAYMARCHING_HYBRID_CONFIG_H