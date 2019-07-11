#include <stdio.h>
#include <math.h>

typedef enum
{
    ADD = 1,
    SUB = 2,
    MULT = 3,
    DIV = 4,
    EXP = 5,
    SQRA = 6,
    SQRB = 7

} formulaTypes;

float formulas(float x, float y,int formulaType)
{
    float result;

    switch(formulaType)
    {
        case ADD:
            //Addition
            result = x + y;
            return result;

        case SUB:
            //Subtraction
            result = x - y;
            return result;

        case MULT:
            //Multiplication
            result = x * y;
            return result;

        case DIV:
            //Division
            result = x / y;
            return result;

        case EXP:
            //Exponent
            result = pow(x,y);
            return result;

        case SQRA:
            //Square Root
            result = sqrt(x);
            return result;

        case SQRB:
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
