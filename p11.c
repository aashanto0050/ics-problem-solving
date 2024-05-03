#include<stdio.h>
int main()
{
float num;
printf("Enter your result numher:\n"); 
scanf("%f",&num);

if(num>=90 && num<=100)
{
  printf("A");
}
else if(num>=86 && num<=89)
{
  printf("A-");
}
else if(num>=82 && num<=85)
{
  printf("B+");
}
else if(num>=78 && num<=81)
{
  printf("B");
}
else if(num>=74 && num<=77)
{
  printf("B-");
}
else if(num>=70 && num<=73)
{
  printf("C+");
}
else if(num>=66 && num<=69)
{
  printf("C");
}
else if(num>=62 && num<=65)
{
  printf("C-");
}
else if(num>=58 && num<=61)
{
  printf("D+");
}
else if(num>=55 && num<=57)
{
  printf("D");
}
else if(num<55)
{
  printf("F");
}
else printf("Invalid keyword!!!");


return 0;
}