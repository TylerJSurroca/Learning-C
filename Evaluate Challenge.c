#include <stdio.h>

typedef enum
{
    LESS = 1,
    MORE = 2,
    EQUAL = 3
} caseTypes;

int numberCheck(int a,int caseType)
{
    int result;

    switch(caseType)
    {
        case LESS:
            printf("Your number is less than 10!");
            return result;

        case MORE:
            printf("Your number is greater than 10!");
            return result;

        case EQUAL:
            printf("Your number is equal to 10!");
            return result;
    }
}

int main()
{
    int x;
    printf("Type a number! \n");
    scanf("%d",&x);

    if(x<10)
    {
        numberCheck(x,1);
    }
    else if(x>10)
    {
        numberCheck(x,2);
    }
    else
    {
        numberCheck(x,3);
    }


    return(0);
}
