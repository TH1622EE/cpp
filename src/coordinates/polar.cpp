#include "polar.hpp"
#include <cmath>

Polar::Polar(){
    double _r = 0;
    double _theta = 0;
}

Polar::Polar(double r, double theta){
    double _r = r;
    double _theta = theta;
    double _x = _r*std::cos(theta);
    double _y = _r*std::sin(theta);
    double _thetaDeg = calcThetaDeg();
}
