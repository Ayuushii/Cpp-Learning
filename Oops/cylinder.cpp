#include "cylinder.h"

//Default Constructor
//MyCylinder::MyCylinder() = default;
    
//Non paramerterized constructor
MyCylinder::MyCylinder(){
    radius = 2.0;
    height = 3.0;
}
//Parameterized constructor
MyCylinder::MyCylinder(double r, double h){
    radius = r;
    height = h;
}

double MyCylinder::getter_r() {
    return radius;
}

double MyCylinder::getter_h() {
    return height;
}

void MyCylinder::setter(double r, double h) {
    radius = r;
    height = h;
}

double MyCylinder::get_volume() {
    return PI*radius*radius*height;
}