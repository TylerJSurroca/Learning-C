#include <stdio.h>
#include <string.h>

int main()
{
    char first[32];
    char second[32];
    char store[64];

    printf("Type your first phrase!\n");
    fgets(first,32,stdin);
    printf("Type your second phrase!\n");
    fgets(second,32,stdin);

    strcpy(store,first);
    strcat(store,second);


    printf("Your new phrase is: \n");
    puts(store);

    return(0);
}
