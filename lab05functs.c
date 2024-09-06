/** lab05functs.c
* ===========================================================
* Name: Matthew Adsit
* Section: T3B
* Project: Lab 5
* Purpose: Learn function prototypes, user-defined functions,
*          return values, and parameters.
* ===========================================================
*/
#include <stdio.h>
#include <math.h>

double degreesToRadians(int angDeg) {
    double radi = 0.0;
    double newDegr = angDeg;
    radi = M_PI * (newDegr/180.0);
    return radi;
}

void printLine(int angDegree) {
    double properAng = degreesToRadians(angDegree);
    printf("%2d\t", angDegree);
    printf("%.3lf\t", sin(properAng));
    printf("%.3lf\n", cos(properAng)); 
}
