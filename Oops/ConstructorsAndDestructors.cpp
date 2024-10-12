#include <iostream>

const double PI {3.1415926535897932384626433832795};

class MyCylinder {
    double radius{};
    double height{};

    public:
    //Default Constructor
        MyCylinder() = default;

    //Non paramerterized constructor
        MyCylinder(){
            radius = 2.0;
            height = 3.0;
        }
    //Parameterized constructor
        MyCylinder(double r, double h){
            radius = r;
            height = h;
        }

        double get_volume() {
            return PI*radius*radius*height;
        }
};
int main () {

    MyCylinder cyl1(10,5);
    
    std::cout<<cyl1.get_volume()<<std::endl;
    return 0;
}