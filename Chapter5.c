#include <stdio.h>
#include <ctype.h>


char *encrypt(char *instruct)
{
    static char output[256];
    int x = 0;

    while(*instruct)
    {
       if(isalpha(*instruct))
        {
            output[x] = *instruct + 128;
        }
        else if(isdigit(*instruct))
        {
            output[x] = *instruct +64;
        }
        else
        {
            output[x] = *instruct;
        }

        x++;
        instruct++;
    }

    return(output);
}

int main()
{
    char *instructions = "The package is down 434 past the wendys and make a left into the neighborhood and retrieve the goods.\n";

    printf("You will find what you seek here: \n%s\n",encrypt(instructions));

    return(0);
}
