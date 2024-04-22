/*
 This header file contains the National Institute of Standards and Technology (NIST) CODATA RECOMMENDED VALUES OF THE FUNDAMENTAL PHYSICAL CONSTANTS: 2018
 **********************************************************************************************************************
 The wallchart used by which these values were derived can be found at the following link: chrome-extension://efaidnbmnnnibpcajpcglclefindmkaj/https://physics.nist.gov/cuu/pdf/wall_2018.pdf
 **********************************************************************************************************************
 Author:    Tim Holden
 Date:      November 14, 2023
 Repo:      https://github.com/TH1622EE/cpp
 **********************************************************************************************************************
*/

#ifndef NIST_HPP
#define NIST_HPP

class NIST
{
public:
    const long double SPEED_OF_LIGHT_IN_VACUUM = 2.99792458e8; //Units of m s^-1
    const long double NEWTONIAN_CONST_OF_GRAVITATION = 6.6743015e-11; //Units of m^3 kg^-1 s^-2
    const long double PLANK_CONST = 6.2607015e-34; //Units of J Hz^-1
};

#endif
