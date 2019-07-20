#include <stdio.h>
#include <ctype.h>

int islower(int ch)
{
    if(ch < 'a' || ch > 'z')
    {
        return(0);
    }
    else
    {
        return(1);
    }
}

int main()
{
    int c;

    do
    {
        c = getchar();
        if(islower(c))
            putchar(c);
    }
    while(c != '\n');

    return(0);
}
