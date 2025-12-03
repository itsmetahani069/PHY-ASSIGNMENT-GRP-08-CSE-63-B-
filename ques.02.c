#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main() {

double angle;
scanf("%lf", &angle);
double ratio = 1/sin(angle * PI/180.0);

printf("a/lambda = %.3f\n", ratio);
return 0;

}
