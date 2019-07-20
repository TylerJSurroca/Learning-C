#include <stdio.h>
#include <string.h>

int main()
{
    char check[64];

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

    fgets(check,64,stdin);
    printf("%s", check);

    if(check == 'y')
    {
        printf("The person you are looking for is : %s. \n",francisco.name);
        printf("They are %d years old and %f feet tall\n.",francisco.age,francisco.height);
    }
    else if(check == 'a')
    {
        printf("The person you are looking for is : %s. \n",tyler.name);
        printf("They are %d years old and %f feet tall\n.",tyler.age,tyler.height);
    }
    else
    {
        printf("The person you entered is not in our database!");
        return check;
    }

    return(0);
}
