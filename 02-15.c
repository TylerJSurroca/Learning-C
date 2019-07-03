#include <stdio.h>


int add(int a, int b)
{
    int result = a + b;
    return result;
}

int square(int a)
{
    int result = 0;

    result = a * a;

    return result;
}

int power(int x, int y)
{
    int result = 1;

    for (int i = 0; i < y; i++)
    {
        result = result * x;
    }

    return result;
}

int fibonacci(int nth)
{
    int result = 0;

    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...


    return 0;
}

int main(int param)
{
    char input[64];

    printf("Instructions: ");
    fgets(input,64,stdin);
    puts("Thank you! Here are your instructions: ");
    puts(input);

    int addedValues = add(4, 5);

    printf("The add result is %d\n", addedValues);

    int powerOf2 = power(2, 8);
    printf("The power result is %d", powerOf2);

    for (int i = 0; i < 10; i++)
    {
        int powerOf2 = power(i, 3);
        printf("The cube result is %d\n", powerOf2);
    }

    ////////////////// Bad Code ////////////////////
    int result = 1;
    for (int i = 0; i < 3; i++)
    {
        result = result * 2;
    }
    printf("The power result is %d", result);

    return(0);
}
