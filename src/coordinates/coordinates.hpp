#ifndef COORDINATES_HPP
#define COORDINATES_HPP

class Coordinates{

private:

    double _x = 0;
    double _y = 0;
    double _z = 0;
    double _r = 0;
    double _theta = 0;
    double _thetaDeg = 0;
    double _phi = 0;
    double _phiDeg = 0;

public:

    Coordinates();

    /**
     * The conventional setters for the private class members as virtual functions to enable the programmer the ability to redefine ALL associated parameters when one is changed. For example, if I were to change the value of z, this would impact the magnitude for Polar, Cartesian, and Spherical coordinate system values. Therefore, the intent is to create implementations in each of these sub-classes for the setters which will force the update of ALL effected values in the other ccoordinates systems.
    */
    virtual void set_x(double);
    virtual void set_y(double);
    virtual void set_z(double);
    virtual void set_r(double);
    virtual void set_theta(double);
    virtual void set_thetaDeg(double);
    virtual void set_phi(double);
    virtual void set_phiDeg(double);

    /**
     * The conventional getters for the private class members
    */
    double get_x() const;
    double get_y() const;
    double get_z() const;
    double get_r() const;
    double get_theta() const;
    double get_thetaDeg() const;
    double get_phi() const;
    double get_phiDeg() const;

    /**
     * These functions are designed to be used in the individual constructors of the Cartesian, Polar, Cylindrical, and * Spherical classes to initialize ALL coordinate system compoonents for each object upon initialization
    */
    double calcMag();
    double calcTheta();
    double calcThetaDeg();
    double calcPhi();
    double calcPhiDeg();

};

#endif
