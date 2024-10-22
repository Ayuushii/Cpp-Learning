#include <iostream>
#include "cylinder.h"

int main () {
    
    //Stack object
    MyCylinder c1(10, 2.5);
    std::cout<<"Volume of c1: "<<c1.get_volume()<<std::endl;

    //Pointer to object on stack
    MyCylinder *c_ptr = &c1;

    //Reference to object on stack. Creates an alias for c1. Internally uses const pointer
    MyCylinder &c_ref{c1};
    std::cout<<c_ref.get_volume()<<std::endl;

    //Heap object: To access -
    //Dereferencing then using .notation
    //using -> notation

    //Create a pointer to object
    MyCylinder *cyl_ptr = new MyCylinder(10,5);

    std::cout<<"Using dereferencing and . notation Volume of cyl_ptr: "<<(*cyl_ptr).get_volume()<<std::endl;
    std::cout<<"Using -> notation Volume of cyl_ptr: "<<cyl_ptr->get_volume()<<std::endl;

    //Object is created dynamically on the heap memory
    //Imp: Has to be cleared
    delete cyl_ptr;
    return 0;
}