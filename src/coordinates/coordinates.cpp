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

void Coordinates::set_thetad(double thetad){
    _thetad = thetad;
}

void Coordinates::set_phi(double phi){
    _phi = phi;
}

void Coordinates::set_phid(double phid){
    _phid = phid;
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

double Coordinates::get_thetad() const{
    return _thetad;
}

double Coordinates::get_phi() const{
    return _phi;
}

double Coordinates::get_phid() const{
    return _phid;
}

void Coordinates::calcMag(){
    _r = std::sqrt(std::pow(Coordinates::get_x(),2) + std::pow(Coordinates::get_y(),2) + std::pow(Coordinates::get_z(),2));
}

void Coordinates::calcTheta(){
    _theta = std::atan2(Coordinates::get_y(),Coordinates::get_x());
}

void Coordinates::calcThetad(){
    _thetad = std::atan2(Coordinates::get_y(),Coordinates::get_x())*180/std::numbers::pi;
}

void Coordinates::calcPhi(){
    _phi = std::acos(Coordinates::get_z()/std::sqrt(std::pow(Coordinates::get_x(),2) + std::pow(Coordinates::get_y(),2) + std::pow(Coordinates::get_z(),2)));
}

void Coordinates::calcPhid(){
    _phid = std::acos(Coordinates::get_z()/std::sqrt(std::pow(Coordinates::get_x(),2) + std::pow(Coordinates::get_y(),2) + std::pow(Coordinates::get_z(),2)))*180/std::numbers::pi;
}
