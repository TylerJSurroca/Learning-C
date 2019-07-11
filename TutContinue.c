#include <stdio.h>
#include <math.h>

typedef enum
{
    ADD = 1,
    SUB = 2,
    MULT = 3,
    DIV = 4,


} formulaTypes;

float formulas(float x, float y,int formulaType)
{
    float result;

    switch(formulaType)
    {
        case add:
            //Addition
            result = x + y;
            return result;

        case sub:
            //Subtraction
            result = x - y;
            return result;

        case 3:
            //Multiplication
            result = x * y;
            return result;

        case 4:
            //Division
            result = x / y;
            return result;

        case 5:
            //Exponent
            result = pow(x,y);
            return result;

        case 6:
            //Square Root
            result = sqrt(x);
            return result;

        case 7:
            result = sqrt(y);
            return result;

        default:
            printf("Invalid Formula Type");
            break;
    }

}

int main()
{
    float a,b;
    float displaySolutions;
    int x = 1;

    printf("Enter value a: ");
    scanf(" %f",&a);
    printf("Enter value b: ");
    scanf(" %f",&b);

    while(x <= 7)
    {
        displaySolutions = formulas(a,b,x);
        printf("%f\n",displaySolutions);
        x++;
    }

    return(0);
}
