#include <stdio.h>

int main()
{
    int x,y;

    printf("For loop starts here: \n");
    for(x=0;x<20;x++)
    {
        printf("%d\n",x+1);
    }

    y = -11;
    printf("\nWhile loop starts here: \n");
    while(y < 10)
    {
        printf("%d\n",y+1);
        y = y + 2;
    }

    return(0);
}
