#include <stdio.h>
#include <string.h>

int main()
{
    char check[64];
    char fran[32] = "Francisco";
    char tyl[32] = "Tyler";

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

    scanf("%s",&check);

    if(strcmp(check, tyl) == 0)
    {
        printf("The person you are looking for is : %s. \n",tyler.name);
        printf("They are %d years old and %f feet tall\n.",tyler.age,tyler.height);
    }
    else if(strcmp(check, fran) == 0)
    {
        printf("The person you are looking for is : %s. \n",francisco.name);
        printf("They are %d years old and %f feet tall\n.",francisco.age,francisco.height);
    }
    else
    {
        printf("The person you entered is not in our database!");
        return(0);
    }

    return(0);
}
