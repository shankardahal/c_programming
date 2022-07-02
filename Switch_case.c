#include <stdio.h>

int main()
{

    int number;
    printf("Enter num of day :");
    printf("%d",&number);
    switch (number)
    {
    case 1:
        printf("The day is Sunday. \n");
        break;
    case 2:
        printf("The day is Monday. \n");
        break;
    case 3:
        printf("The day is Tuesday. \n");
        break;
    case 4:
        printf("The day is Wednesday. \n");
        break;
    case 5:
        printf("The day is Thursdayt. \n");
        break;
    case 6:
        printf("The day is Friday. \n");
        break;
    case 7:
        printf("The day is Saturday. \n");
        break;

    default:
        printf("Invalid option Given.\n");
    }

    return 0;
}