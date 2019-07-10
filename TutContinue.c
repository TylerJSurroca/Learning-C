#include <stdio.h>
#include <math.h>

int formulas(float x, float y)
{
    float a,b;
    int add,sub,mul,div,exp,sqra,sqrb;

    //Addition
    add = a + b;
    /*
    //Subtraction
    sub = a - b;
    //Multiplication
    mul = a * b;
    //Division
    div = a / b;
    //Exponent
    exp = pow(a,b);
    //Square Root
    sqra = sqrt(a);
    sqrb = sqrt(b);
    */

}

struct formulas2
{
    float a,b;
    int add;

    const add = a + b;
};

int printFormulas(float a, float b)
{

    float add = formulas(a,b);
    printf("%f",add);

}

int main()
{
    float a,b;
    int displaySolutions;

    printf("Enter value a: ");
    scanf("%f",&a);
    printf("Enter value b: ");
    scanf("%f",&b);

    displaySolutions = printFormulas(a,b);
    printf("%f",displaySolutions);

    return(0);
}
