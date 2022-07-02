#include <stdio.h>

int main()
{

int age;
printf("Enter your age : \n");
scanf("%d",&age);

if(age>=18)
{
    printf("You are Voter \n");
}

else{
    printf("You are not Voter\n");
}


return 0;
}