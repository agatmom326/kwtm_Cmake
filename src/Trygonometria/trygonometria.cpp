#include "trygonometria.h" 
#include <cmath> 

double degreemath::sinus(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
double radian = degree/180;

return std::sin(radian);  //funkcja biblioteczna z piku <cmath> 
} 

double degreemath::cosinus(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
    double radian = degree/180;
return std::cos(radian);  //funkcja biblioteczna z piku <cmath> 
} 

double degreemath::tangens(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
    double radian = degree/180;
return std::tan(radian);  //funkcja biblioteczna z piku <cmath> 
} 

double degreemath::cotangens(double degree) {
 //zamiana stopni na radiany: pi radianów = 180 stopni 
    double radian = degree/180;

return std::tan(radian);  //funkcja biblioteczna z piku <cmath> 
} 
