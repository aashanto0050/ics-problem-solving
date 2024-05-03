#include <stdio.h>

int main() {
     int num1;
    printf("Enter a positive nonzero number: ");
    scanf("%d", &num1);
    
    if (num1 != 0 && (num1 & (num1 - 1)) == 0) {
        printf("Yes\n");
    }
    
    else if(num1==0)
    {
       printf("Zero is not valid Input");
    }
    
    else if (num1<0)
    {
      printf("Negative Input is not valid");
    }
    
     else {
        printf("No\n");
    }
    return 0;
}
