#ifndef JULIA_H
#define JULIA_H
#include "QImage.h"
#include <pthread.h>

class Julia
{
    float a,b,bailout,iter;
    QImage im;
public:
    Julia(float a,float b,float bailout,float iter);

};

#endif // JULIA_H
