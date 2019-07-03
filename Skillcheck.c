#include <stdio.h>

void demoPointer()
{
    int* ptrToIntX;
    int x;

    ptrToIntX = &x;
    printf("Ptr to int x = %d, value at int x = %d\n", ptrToIntX, x);

    *ptrToIntX = 20;
    printf("Ptr to int x = %d, value at int x = %d\n", ptrToIntX, x);

    x = 10;
    printf("Ptr to int x = %d, value at int x = %d\n", ptrToIntX, x);
}

int square(int a)
{
    int answer = 0;

    answer = a * a;

    return answer;
}

int main()
{
    int x;

    printf("Enter a number between 1-5: ");
    scanf("%d",&x);

    if(x == 4)
    {
        printf("Correct! %d\n",x);
    }

    else if (x > 4, x < 4)
    {
        printf("Wrong!\n");
    }

    else
    {
        printf("That is not what I asked!\n");
    }

    int y;
    scanf("%d",&y);

    int sqaurefunc = square(y);
    printf("%d",sqaurefunc);

    return(0);
}
