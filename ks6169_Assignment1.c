#include <stdio.h>
#include <math.h>

// Kevin Song 
// NetID: ks6169
// CSO secion 081
// TA Yang He
// 3/2/2022
// Assignment 1

int findAngle(double a, double b, double c) // 1a and 1b
{
    double cosine;
    cosine = ((a*a) + (b*b) - (c*c)) / ((2*a*b)); // Law of cosines
    float roundedCos = roundf(cosine * 1000) / 1000;
    printf("The cosine of the largest angle: %g\n", roundedCos);

    printf("\nThis number would be stored as a 32 bit floating point with the sign = 1 since it is negative.\nE must be equal to -1 because the binary representation of 0.511 (0.100000101101000011100101) needs to shift the decimal place to the right by 1 digit.\nTherefore, the exponent is 126 because the bias is 127 so 126 - 127 = -1. 126 in binary is 01111110. \nFinally, we normalize the mantissa by removing the 1 from the adjusted binary representation to get 00000101101000011100101.\nThe representation in memory of -0.511 is therefore: 1 01111110 00000101101000011100101.\n\n");
    return 0;
}

int findArea(double a, double b, double c) // 1c and 1d
{
    double semiP = (a+b+c)/2;
    double area = sqrt((semiP *(semiP - a)*(semiP - b)*(semiP - c))); // Heron's formula
    float roundedArea = roundf(area * 1000) / 1000;
    printf("The area of the triangle is: %g\n", roundedArea);

    printf("\nThis number would be stored as a 32 bit floating point with the sign = 0 since it is positive.\nE must be equal to 5 because the binary representation of 56.718 (111000.101101111100111011011001) needs to shift the decimal point to the left by 5 digit.\nTherefore, the exponent is 132 because the bias is 127 so 132 - 127 = 5. 132 in binary is 10000100. \nFinally, we normalize the mantissa by removing the 1 from the adjusted binary representation to get 11000101101111100111011.\nThe representation in memory of 56.718 is therefore: 0 10000100 11000101101111100111011.\n\n");
    return 0;
}

double calculateArea(double d, double e, double f) // 2
{
    double semiP = (d+e+f)/2;
    double area = sqrt((semiP *(semiP - d)*(semiP - e)*(semiP - f))); // Heron's formula
    return area;
}

int main()
{
    // Questions 1a - 1d
    double a, b, c;
    a = 11;
    b = 12;
    c = 20;

    findAngle(a,b,c);
    findArea(a,b,c);
    
    // Question 2
    double d, e, f;
    printf("Find the area of a triangle from 3 sides.\nEnter a value for d: ");
    scanf("%lf", &d);
    printf("Enter a value for e: ");
    scanf("%lf", &e);
    printf("Enter a value for f: ");
    scanf("%lf", &f);

    if(((d + e) < f) || ((d + f) < e) || ((e + f) < d)){
        printf("Invalid input.");
    }

    else{
        double triangle;
        triangle = calculateArea(d,e,f);
        printf("The triangle area is: %f\n", triangle);
        
    }
    return 0;
}