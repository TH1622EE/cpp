#include "cartesian.hpp"
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

double Cartesian::get_x() const{
    return _x;
}

double Cartesian::get_y() const{
    return _y;
}

double Cartesian::get_z() const{
    return _z;
}

double Cartesian::calc_mag(){
    double mag = std::sqrt(std::pow(Cartesian::get_x(),2) + std::pow(Cartesian::get_y(),2) + std::pow(Cartesian::get_z(),2));
    return mag;
}
