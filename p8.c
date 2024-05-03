#include <stdio.h>

int main() {
     int num1;
    printf("Enter a Year: ");
    scanf("%d",&num1);
    
    if ((num1%4 == 0 && num1%100!=0) || num1%400==0)
     {
        printf("Yes");
    }
    
     else {
        printf("No");
    }

    return 0;
}