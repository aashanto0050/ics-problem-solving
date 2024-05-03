#include<stdio.h>
int main()
{
    int a,b,c;
    char op;
    printf("_________Calculator___________\n");
    printf("Press + for addition\n");
    printf("Press - for subtraction\n");
    printf("Press * for multiplication\n");
    printf("Press / for division\n");
    printf("If choice is / then provide another choice...\n");
    printf("Press 1 for Quotient\n");
    printf("Press 2 for Remainder\n");

    printf("_________Calculator___________\n");
    printf("Enter Two Integer Numbers\n");
     printf("Enter First Number:\n");
     scanf("%d",&a);
    printf("Enter Second Number:\n");
     scanf("%d",&b);
     printf("Enter your choice +/-/*//:\n");
     scanf(" %c",&op);

     switch(op){

       case '+':
    printf("Addition:%d\n",a+b);
       break;
     case '-':
    printf("Subtraction:%d\n",a-b);
  break;
       case '*':
    printf("Multiplication:%d\n",a*b);
       break;
       case '/':
    printf("Enter choice 1/2:");
       scanf("%d",&c);
       if(c==1){
        printf("Quotient:%d\n",a/b);
       }
       else if(c==2){
        printf("Remainder:%d\n",a%b);
       }
       else printf("Invalid Number !!!!");
       break;
       default :
    printf("Invalid Number !!!!");
     }

        printf("Enter Any Key to Exit...\n");
        getchar();
return 0;
}