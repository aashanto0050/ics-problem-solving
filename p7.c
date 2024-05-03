#include <stdio.h>

int main() {
     int x,y;
    printf("Enter two number: ");
    scanf("%d %d", &x,&y);
    
    if (x>y)
     {
        printf("%d is greater than %d",x,y);
    }
    
    else if(x<y)
    {
       printf("%d is less than %d ",x,y);
    }
    
    else if (x==y)
    {
      printf("%d is equal to %d",x,y);
    }
    
     else {
        printf("Invalid Keyword!!!");
    }

    return 0;
}