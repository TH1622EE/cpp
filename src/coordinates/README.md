# Coordinates Class

The *Coordinates* class was created as a base class for the *Polar*, *Cylindrical*, and *Spherical* subclasses. Each of the subclasses will inherit the **getter/accessor** and **setter/mutator** methods enabling them the ability to access the private class members of the base class. The ideology of this implementation is to enable the user the ability to create an object of any of the subclasses and simultaneously have access to the cooresponding coordinate system values of any of the other subclasses with associated values. For mathematical derivations and explanations of the *Cartesian* coordinate system refer to [this](https://www.cuemath.com/geometry/cartesian-coordinate-system/) link. For mathematical derivations and explanations of the *Polar* coordinate system refer to [this](https://tutorial.math.lamar.edu/classes/calcii/polarcoordinates.aspx) link. Lastly, for mathematical derivations and explanations of *Cylindrical* and *Spherical* coordinate systems you may refer to [this](https://math.libretexts.org/Courses/Monroe_Community_College/MTH_212_Calculus_III/Chapter_11%3A_Vectors_and_the_Geometry_of_Space/11.7%3A_Cylindrical_and_Spherical_Coordinates#:~:text=collapse%20global%20location-,11.7%3A%20Cylindrical%20and%20Spherical%20Coordinates,-11.6E%3A%20Exercises%20for)link.

## Mathematical Convention vs. Physics Convention

It is important to note the mathematical convention for angular values was used meaning the value of **\theta** is the azimuthal angle (i.e., the angular value of the radial vector off the x-axis in the x-y plane), and the value of **\phi** is the **Polar** angle (i.e., the angular value of the radial vector off the z-axis). This can be very confusing when not clarified given that the Physics convention is to use $\theta$ as the polar angle, and $\phi$ as the azimuthal angle. Furthermore, the value of `r` is used to represent both the radial distance vector in *Polar* coordinates, as well as the conventional value of $\rho$ common to *Cylindrical* and *Spherical* coordinates. The following is a visual example acquired from [this](https://en.wikipedia.org/wiki/Spherical_coordinate_system#:~:text=The%20mathematics%20convention.) link which will elaborate further on the variations between the Mathematics and Physics conventions.

<style>
  p {color:white;}
  .invert_effect {filter: invert(100%);}
</style>
<p align="center">
  <img class="invert_effect" src="https://upload.wikimedia.org/wikipedia/commons/thumb/d/dc/3D_Spherical_2.svg/1920px-3D_Spherical_2.svg.png" width="700" />
</p>

## Explanations of Implementation

For example, if you were to create an object of the *Polar* class, you would automatically populate values for the the `_x` and `_y` private members of the coordinates class, but the `z` and `phi` values would remain zero as they are not relevant to the *Polar* coordinate system. However, you have the ability to set the value of `z` and `phi` at any time using the **getter/accessor** and **setter/mutator** inherited from the *Coordinates* class.

Furthermore, each coordinate system with an associated angular value of `_theta` or `_phi` is by default in units of radians. However, there exists an angular equivalent `_thetaDeg` and `phiDeg` as well in units of degrees.
