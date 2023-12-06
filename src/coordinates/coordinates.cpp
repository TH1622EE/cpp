#include "coordinates.hpp"
#include <numbers>
#include <cmath>

Coordinates::Coordinates(){
    double _x = 0;
    double _y = 0;
    double _z = 0;
    double _r = 0;
    double _theta = 0;
    double _phi = 0;
}

void Coordinates::set_x(double x){
    _x = x;
}

void Coordinates::set_y(double y){
    _y = y;
}

void Coordinates::set_z(double z){
    _z = z;
}

void Coordinates::set_r(double r){
    _r = r;
}

void Coordinates::set_theta(double theta){
    _theta = theta;
}

void Coordinates::set_thetaDeg(double thetaDeg){
    _thetaDeg = thetaDeg;
}

void Coordinates::set_phi(double phi){
    _phi = phi;
}

void Coordinates::set_phiDeg(double phiDeg){
    _phiDeg = phiDeg;
}

double Coordinates::get_x() const{
    return _x;
}

double Coordinates::get_y() const{
    return _y;
}

double Coordinates::get_z() const{
    return _z;
}

double Coordinates::get_r() const{
    return _r;
}

double Coordinates::get_theta() const{
    return _theta;
}

double Coordinates::get_thetaDeg() const{
    return _thetaDeg;
}

double Coordinates::get_phi() const{
    return _phi;
}

double Coordinates::get_phiDeg() const{
    return _phiDeg;
}

double Coordinates::calcMag(){
    _r = std::sqrt(std::pow(Coordinates::get_x(),2) + std::pow(Coordinates::get_y(),2) + std::pow(Coordinates::get_z(),2));
}

double Coordinates::calcTheta(){
    _theta = std::atan2(Coordinates::get_y(),Coordinates::get_x());
}

double Coordinates::calcThetaDeg(){
    _thetaDeg = std::atan2(Coordinates::get_y(),Coordinates::get_x())*180/std::numbers::pi;
}

double Coordinates::calcPhi(){
    _phi = std::acos(Coordinates::get_z()/std::sqrt(std::pow(Coordinates::get_x(),2) + std::pow(Coordinates::get_y(),2) + std::pow(Coordinates::get_z(),2)));
}

double Coordinates::calcPhiDeg(){
    _phiDeg = std::acos(Coordinates::get_z()/std::sqrt(std::pow(Coordinates::get_x(),2) + std::pow(Coordinates::get_y(),2) + std::pow(Coordinates::get_z(),2)))*180/std::numbers::pi;
}
