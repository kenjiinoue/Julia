#include "julia.h"

Julia::Julia(float a,float b,float bailout,float iter)
{
    this->a = a;
    this->b = b;
    this->bailout = bailout;
    this->iter = iter;


}
void Julia::process(){
    int x,y;
    QRgb pix;
    for(x = 0; x < 640; x++){
        for(y = 0; y < 480; y++){
            pix = calcPixel(x,y);
            this->im.setPixel(x,y,pix);
        }
    }
    return;
}

QRgb Julia::calcPixel(int x, int y){
    int i = 0;
    float zreal = x;
    float zim = y;
    int numit;
    //float zreal = ((float)(pow(x,2) - pow(y,2)))+this->a;
    //float zim = ((float)(2*x*y) + this->b);

    while(i < this->iter){

        zreal = ((float)(pow(zreal,2) - pow(zim,2)))+this->a;
        zim = ((float)(2*zreal*zim) + this->b);
        if (this->magnitude(zreal,zim) >= bailout){
            numit = i;
            i = this->iter;
        }

    }
    return 0;
}

float Julia::magnitude(float zreal, float zim){
    return (pow((pow(zreal,2)+pow(zim,2)),.5));
}
