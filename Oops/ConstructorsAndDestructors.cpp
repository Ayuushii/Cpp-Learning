#include <iostream>
#include "cylinder.h"

int main () {

    MyCylinder cyl1(10,5);
    
    std::cout<<cyl1.get_volume()<<std::endl;
    return 0;
}