#include <stdio.h>
#include <string.h>

int main()
{
    char check[64];
    char fran[32] = "Francisco";
    char tyl[32] = "Tyler";
    int cont = 1;
    char userInput;

    struct person {
        int age;
        float height;
        char name[32];
    };
    struct person tyler = {
        19,
        5.11,
        "Tyler Surroca"
    };
    struct person francisco = {
        49,
        5.10,
        "Francisco Surroca"
    };

    while(cont)
    {
        printf("Enter the name of the person you wish to see: \n");
        scanf("%s",&check);

        if(strcmp(check, tyl) == 0)
        {
            printf("The person you are looking for is : %s. \n",tyler.name);
            printf("They are %d years old and %.2f feet tall.\n",tyler.age,tyler.height);
        }
        else if(strcmp(check, fran) == 0)
        {
            printf("The person you are looking for is : %s. \n",francisco.name);
            printf("They are %d years old and %.2f feet tall.\n",francisco.age,francisco.height);
        }
        else
        {
            printf("The person you entered is not in our database!\n");
        }

        printf("\nDo you wish to search another person? Y/N ");

        scanf(" %c", &userInput);
        switch(userInput)
        {
            case 'Y':
                cont = 1;
                break;
            case 'y':
                cont = 1;
                break;
            case 'N':
                cont = 0;
                break;
            case 'n':
                cont = 0;
                break;
        }

    }


    return(0);
}
