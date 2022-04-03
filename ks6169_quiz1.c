

#include <stdio.h>
// This is written for angle degree inputs

int fun(int a, int b, int c)
{
    if(0 == (a - b) || 0 == (a-c) || 0 == (b-c))
    {
        return 2;
    }
    else if( 0 == (a- b) && 0 == (b-c))
    {
        return 1;
    }
    else 
    {
        return 3;
    }
}

int main(){

    int a, b, c;

    printf("Enter a value for a: ");
    scanf("%d", &a);
    printf("Enter a value for b: ");
    scanf("%d", &b);
    printf("Enter a value for c: ");
    scanf("%d", &c);

    if((a+b+c != 180)){
        printf("Invalid input.");
    }

    else{
        int triangle;
        triangle = fun(a,b,c);

        switch(function){
            case 1:
            printf("This is an equilateral triangle.");
            break;

            case 2:
            printf("This is an isosceles triangle.");
            break;

            case 3:
            printf("This is a normal triangle.");
            break;
        }
    }
    return 0;
}