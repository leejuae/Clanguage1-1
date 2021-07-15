#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

void calculate(double a, double b, double c);
int main()
{
	double a, b, c;
	printf("The coefficients of a Quadratic Equation ax^2+bx+c=0 are a,b and c\n");
	printf("Enter values of a,b and c : ");
    scanf("%lf %lf %lf", &a, &b, &c);
	calculate(a, b, c);
    return 0;
}

void calculate(double a, double b, double c) 
{ 
    double d, e;
    if (a == 0)
    {
        printf("Equal roots\n");
        printf("Root is %f", -c / b);
    }
    else
    {
        d = b * b - 4.0 * a * c;
        if (d > 0)
        {
            e = sqrt(d);
            printf("Two real roots\n");
            printf("Roots are %f and %f", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
        }
        else
        {
            if (d == 0)
            {
                printf("Equal roots\n");
                printf("Roots is %f", (-b) / (2.0 * a));
            }
            else
            {
                printf("The equation has imaginary");
            }
        }
    }
}
