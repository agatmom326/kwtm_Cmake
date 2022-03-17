#include "trygonometria.h" 
#include <cmath> 

#define _USE_MATH_DEFINES 

const double pi = 3.1415926535897932384626433832795;

double degreemath::sinus(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
double radian = degree*pi/180;

return std::sin(radian);  //funkcja biblioteczna z piku <cmath> 
} 

double degreemath::cosinus(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
    double radian = degree*pi/180;
return std::cos(radian);  //funkcja biblioteczna z piku <cmath> 
} 

double degreemath::tangens(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
    double radian = degree*pi/180;
return std::tan(radian);  //funkcja biblioteczna z piku <cmath> 
} 

double degreemath::cotangens(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
    double radian = degree*pi/180;

return std::tan(radian);  //funkcja biblioteczna z piku <cmath> 
} 
