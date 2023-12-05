#ifndef COORDINATES_HPP
#define COORDINATES_HPP

class Coordinates{

private:

    double _x = 0;
    double _y = 0;
    double _z = 0;
    double _r = 0;
    double _theta = 0;
    double _thetad = 0;
    double _phi = 0;
    double _phid = 0;

public:

    Coordinates();

    void set_x(double);
    void set_y(double);
    void set_z(double);
    void set_r(double);
    void set_theta(double);
    void set_thetad(double);
    void set_phi(double);
    void set_phid(double);

    double get_x() const;
    double get_y() const;
    double get_z() const;
    double get_r() const;
    double get_theta() const;
    double get_thetad() const;
    double get_phi() const;
    double get_phid() const;

    void calcMag();
    void calcTheta();
    void calcThetad();
    void calcPhi();
    void calcPhid();

};

#endif
