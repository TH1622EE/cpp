/*
 This header file contains the National Institute of Standards and Technology (NIST) CODATA RECOMMENDED VALUES OF THE FUNDAMENTAL PHYSICAL CONSTANTS: 2018
 **********************************************************************************************************************
 The wallchart used by which these values were derived can be found at the following link: chrome-extension://efaidnbmnnnibpcajpcglclefindmkaj/https://physics.nist.gov/cuu/pdf/wall_2018.pdf
 **********************************************************************************************************************
 Author:    Tim Holden
 Date:      November 14, 2023
 Repo:      https://github.com/Earth-Worm-Tim/cpp
 **********************************************************************************************************************
*/

#ifndef NIST_HPP
#define NIST_HPP

#include<iostream>

class NIST
{
public:
    const unsigned int SPEED_OF_LIGHT_IN_VACUUM = 299792458; //Units of m s^-1
    const unsigned int NEWTONIAN_CONST_OF_GRAVITATION = 000000000066743015; //Units of m^3 kg^-1 s^-2
    const unsigned int PLANK_CONST = 00000000000000000000000000000000062607015; //Units of J Hz^-1

};

#endif
