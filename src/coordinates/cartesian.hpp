#ifndef COORDINATES_HPP
#define COORDINATES_HPP

class Cartesian {

private:

    double _x = 0;
    double _y = 0;
    double _z = 0;

public:

    Cartesian();
    Cartesian(double x, double y);
    Cartesian(double x, double y, double z);

    void set_x(double x);
    void set_y(double y);
    void set_z(double z);

    double get_x();
    double get_y();
    double get_z();

    double calc_mag();

};

#endif
