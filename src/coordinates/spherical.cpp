#include "spherical.hpp"
#include <cmath>

Spherical::Spherical(){
    double _r = 0;
    double _theta = 0;
    double _phi = 0;
}

Spherical::Spherical(double r, double theta, double phi){
    double _r = r;
    double _theta = theta;
    double _phi = phi;
    double _x = _r*std::sin(_phi)*std::cos(_theta);
    double _y = _r*std::sin(_phi)*std::sin(_theta);
    double _z = _r*std::cos(_phi);
    double _thetaDeg = calcThetaDeg();
    double _phiDeg = calcPhiDeg();
}
