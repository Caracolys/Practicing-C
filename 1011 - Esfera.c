#include <stdio.h>
 
int main() {
 
double R, volume, pi;

pi = 3.14159;

scanf ("%lf", &R);

volume = (R*R*R) * (4/3.0) * pi;

printf ("VOLUME = %.3lf\n", volume);

    return 0;
}
