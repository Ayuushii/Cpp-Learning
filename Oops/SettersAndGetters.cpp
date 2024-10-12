#include <iostream>
#include "cylinder.h"

int main () {

    MyCylinder cyl1;
    
    std::cout<<"Radius: "<<cyl1.getter_r()<<" Height: "<<cyl1.getter_h()<<std::endl;

    cyl1.setter(1.0,2.0);

    std::cout<<"Radius: "<<cyl1.getter_r()<<" Height: "<<cyl1.getter_h()<<std::endl;

    std::cout<<"Volume:"<<cyl1.get_volume()<<std::endl;
    return 0;
}