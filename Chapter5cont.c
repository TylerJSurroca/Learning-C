#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input;
    input = malloc(sizeof(char)*32);
    if(input == NULL)
    {
        puts("Unable to allocate memory");
        return(1);
    }

    printf("Type your name! \n");
    fgets(input,32,stdin);
    printf("Hello %s\n",input);

    return(0);
}
