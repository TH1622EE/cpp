#ifndef CARTESIAN_HPP
#define CARTESIAN_HPP

#include "coordinates.hpp"

class Cartesian : public Coordinates{

public:

    Cartesian();
    Cartesian(double, double);
    Cartesian(double, double, double);

};

#endif
