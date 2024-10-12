#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>

const double PI {3.1415926535897932384626433832795};
//Imp: Members of a class are private by default

class MyCylinder {
    private:
        double radius{};
        double height{};
    public:
        MyCylinder();
        MyCylinder(double r, double h);
        double getter_r();
        double getter_h();
        void setter(double r, double h);
        double get_volume();
};

#endif