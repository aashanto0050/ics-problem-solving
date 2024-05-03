#include<stdio.h>
int main()
{
 float num1,num2;
 char op;
 printf("Enter one Number:\n");
 scanf("%f",&num1);
 printf("Choose your operator(+,-,*,/)\n");
 scanf(" %c",&op);
 printf("Enter second Number:\n");
 scanf("%f",&num2);
 
 if(op=='+')
 {
 printf("Addition:%.2f",num1+num2);
 }
 else if(op=='-')
 {
 printf("Subtraction:%.2f",num1-num2);
 }
 else if(op=='*')
 {
 printf("Multiplication:%.0f",num1*num2);
 }
 
 else if(op=='/')
 {
   if(num1==0 || num2==0)
 {
   printf("Zero as divisor is not valid!");
 }
 
 else
 printf("Divided:%.6f",num1/num2);
 }
 else printf("Invalid Keyword!!!");
return 0;
}