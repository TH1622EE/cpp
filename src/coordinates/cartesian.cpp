#include "cartesian.hpp"

#include <complex>
#include <numbers>
#include <cmath>

Cartesian::Cartesian(){
    _x = 0;
    _y = 0;
    _z = 0;
}

Cartesian::Cartesian(double x, double y){
    _x = x;
    _y = y;
    _z = 0;
}

Cartesian::Cartesian(double x, double y, double z){
    _x = x;
    _y = y;
    _z = z;
}

void Cartesian::set_x(double x){
    _x = x;
}

void Cartesian::set_y(double y){
    _y = y;
}

void Cartesian::set_z(double z){
    _z = z;
}

double Cartesian::get_x(){
    return _x;
}

double Cartesian::get_y(){
    return _y;
}

double Cartesian::get_z(){
    return _z;
}

double Cartesian::calc_mag(){
    double mag = sqrt(pow(_x,2)+pow(_y,2)+pow(_z,2));
    return mag;
}
