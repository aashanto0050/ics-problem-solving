#include<stdio.h>

int main()
{
    float n;
    printf("Enter The Digit:");
    scanf("%f",&n);
    if(n>0)
    {
        printf("Positive");
    }
    else if(n<0)
    {
        printf("Negative");
    }
    

    return 0;
}