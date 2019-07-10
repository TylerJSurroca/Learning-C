#include <stdio.h>
#include <math.h>

int main()
{
    float a,b;
    float add,sub,mult,div,exp,sqra,sqrb;


    printf("Enter value a: ");
    scanf(" %f",&a);
    printf("Enter value b: ");
    scanf(" %f",&b);

    add = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    exp = pow(a,b);
    sqra = sqrt(a);
    sqrb = sqrt(b);

    printf("Your values added are: %f\n",add);
    printf("Your values subtracted are: %f\n",sub);
    printf("Your values multiplied are: %f\n",mult);
    printf("Your values divided are: %f\n",div);
    printf("Your values powered are: %f\n",exp);
    printf("A squared is : %f\n",sqra);
    printf("B squared is : %f\n",sqrb);

    return(0);
}
