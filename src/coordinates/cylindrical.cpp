#include "cylindrical.hpp"
#include <cmath>

Cylindrical::Cylindrical(){
    double _r = 0;
    double _theta = 0;
    double _z = 0;
}

Cylindrical::Cylindrical(double r, double theta, double z){
    double _r = r;
    double _theta = theta;
    double _z = z;
    double _x = _r*std::cos(get_theta());
    double _y = _r*std::sin(get_theta());
    double _thetaDeg = calcThetaDeg();
    double _phi = calcPhi();
    double _phiDeg = calcPhiDeg();
}
