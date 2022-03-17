#include <iostream>
using namespace std;

#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE 
	#include "trygonometria.h"
#else 
	#include<cmath>
#endif

int main() { 

const double pi = 3.1415926535897932384626433832795;

//double wynikSin = 0;
#ifdef USE_TRIGONOMETRY_DEGREE 
	double wynikSin = degreemath::sinus(90); //k¹t w stopniach
	cout << wynikSin;
#else 
	double wynikSin = sin(pi/2); //k¹t w radianach
	cout << wynikSin;
#endif
	//double wynikSin = degreemath::sinus(180);
	//double wynikTg = degreemath::cosinus(180);
	
	return 0;


}