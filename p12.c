#include<stdio.h>
int main()
{
 int num1,num2,op;
 printf("Enter one Number:\n");
 scanf("%d",&num1);
 printf("Enter second Number:\n");
 scanf("%d",&num2);
 printf("Choose your operator:\n1.Adiition\n2.Subtraction\n3.Multiplication\n4.Quotient\n");
 scanf(" %d",&op);
 
 if(op==1)
 {
 printf("Addition:%d",num1+num2);
 }
 else if(op==2)
 {
 printf("Subtraction:%d",num1-num2);
 }
 else if(op==3)
 {
 printf("Multiplication:%d",num1*num2);
 }
 
 else if(op==4)
 {
   if(num1<0 || num2<0)
 {
   printf("Quotient:0");
 }
 
 else
 printf("Quotienr:%d",num1%num2);
 }
 else printf("Invalid Keyword!!!");
return 0;
}