#include <iostream>
#include "cylinder.h"

int main () {

    MyCylinder cyl1;
    
    cyl1.setter(1.0,2.0);

    std::cout<<cyl1.get_volume()<<std::endl;
    return 0;
}