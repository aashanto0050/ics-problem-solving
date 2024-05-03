#include<stdio.h>
int main()
{
 float num1,num2;
 int op,rm;
 printf("Enter one Number:\n");
 scanf("%f",&num1);
 printf("Enter second Number:\n");
 scanf("%f",&num2);
 printf("Choose your operator:\n1.Adiition\n2.Subtraction\n3.Multiplication\n4.Divided\n");
 scanf(" %d",&op);
 
 if(op==1)
 {
 printf("Addition:%.0f",num1+num2);
 }
 else if(op==2)
 {
 printf("Subtraction:%.0f",num1-num2);
 }
 else if(op==3)
 {
 printf("Multiplication:%.0f",num1*num2);
 }
 
 else if(op==4)
 {
 
 if(num2==0)
 {
   printf("Error: Divisor is zero");
 }
 else{
 printf("Select:\n1.Quotient:\n2.Reminder:\n");
   scanf("%d",&rm)
   if (rm==2)
   {
     printf("Reminder:%.2f",num1/num2);
   }
 
 else if (rm==1)
 {
 if(num1<0 || num2<0)
 {
   printf("Quotient:0");
 }
 else printf("Invalid Keyword!!"); 
 }
 }
 }
 else printf("Invalid Keyword!!!");
return 0;
}