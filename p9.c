#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a Character:\n");
  scanf("%c",&ch);
  
  if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
  {
    printf("Alphabet");
  }
  
  if(ch>='0' && ch<='9')
  {
    printf("Digit");
  }
  
  else printf("Special Character");

return 0;
}