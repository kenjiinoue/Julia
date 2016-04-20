#ifndef JULIA_H
#define JULIA_H
#include "QImage.h"
#include <pthread.h>
#include <cstdlib>
#include <cmath>
#define COLOR_1 3
//#define MAGNITUDE(zreal, zim)(pow(pow(zreal,2)+pow(zim,2)),.5)

class Julia
{
    float a,b,bailout,iter;
    int currRow;
    QImage im;
public:
    Julia(float a,float b,float bailout,float iter);
    void process();
    QRgb calcPixel(int x, int y);
    float magnitude(float zreal, float zim);

};

#endif // JULIA_H
