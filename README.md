# 104intersection_2018
To create synthesis images, potential intersection points betweenlight rays and scene objects.


Description:

To create synthesis images (when doing ray tracing, for example), potential intersection points betweenlight rays and scene objects (here cylinders, spheres and cones) must be computed. This is exactly whatyou have to do in this project.

To do so, you need to write a 3 dimensional equation of the considered surface, and inject into it the equa-tion of the straight line representing the light ray. You’ll get a quadratic equation, with 0, 1, 2 or an infinitenumber of solutions that will give you the intersection points coordinates.

The straight line is defined by the coordinates of a point by which it passes through and the coordinates ofa parallel vector.

Obeing the origin of the coordinate system, andX,YandZthe axis, the surfaces that must be handledin this project are:

•O-centered spheres,

•Cylinders of revolution aroundZaxis,

•Cones of revolution aroundZaxis which apex isO.
