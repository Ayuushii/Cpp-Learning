#include <iostream>

const double PI {3.1415926535897932384626433832795};

//Imp: Members of a class are private by default
class MyCylinder {
    double radius{};
    double height{};

    public:
        double getter_r() {
            return radius;
        }
        double getter_h() {
            return height;
        }
        void setter(double r, double h) {
            radius = r;
            height = h;
        }
        double get_volume() {
            return PI*radius*radius*height;
        }
};
int main () {

    MyCylinder cyl1;
    
    std::cout<<"Radius: "<<cyl1.getter_r()<<" Height: "<<cyl1.getter_h()<<std::endl;

    cyl1.setter(1.0,2.0);

    std::cout<<"Radius: "<<cyl1.getter_r()<<" Height: "<<cyl1.getter_h()<<std::endl;

    std::cout<<"Volume:"<<cyl1.get_volume()<<std::endl;
    return 0;
}