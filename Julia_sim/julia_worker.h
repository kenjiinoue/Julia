#ifndef JULIA_WORKER_H
#define JULIA_WORKER_H
#include "QImage.h"
QImage julia_controller(float a,float b,float bailout);
int julia_worker(float x,float y,float a,float b,int bailout);
#endif // JULIA_WORKER_H
