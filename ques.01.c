#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main() {

double d, angle, lambda;
scanf("%lf", &d);
scanf("%lf", &angle);
scanf("%lf", &lambda);

 if (lambda < 380 || lambda > 750) {
 printf("Not in range.\n");
 return 0;
 }
 // after converting the units
 d *= 1e-6;
 angle *= PI / 180.0;
 lambda *= 1e-9;

 double m = (d * sin(angle)/ lambda);
 printf("m-th order = %.2f\n", m);
 return 0;

}
