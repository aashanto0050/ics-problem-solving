#include<stdio.h>
int main()
{
int num1;
 printf("Enter a Number:\n");
 scanf("%d",&num1);
 
 if(num1%2==0 || num1==0)
  {
     printf("Even");
  }
  else printf("Odd");
  
 return 0;
}