#include<stdio.h>
#include "myMath.h"
int main(){
    double x;
    printf("Please enter a real number:");
    scanf("%lf",&x);
    float ans1 = sub( add(Exponent( myfloor(x) ), Power(x,3)),2);
    double ans2 = add(mul(x,3),mul(Power(x,2),2));
    double ans3 = sub(div(mul((Power(x,3)),4),5),mul(x,2));
    printf("The value of f(X) = e^x + x^3 -2 at the point %0.4f is: %0.4f\n", x ,ans1);
    printf("The value of f(X) = 3X + 2X^2  at the point %0.4f is: %0.4f\n", x ,ans2);
    printf("The value of f(X) = (4x^3)/5 -2x  at the point %0.4f is: %0.4f", x ,ans3);
    return 0;
}
