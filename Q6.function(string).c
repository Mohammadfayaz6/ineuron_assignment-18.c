//6. Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
#include<ctype.h>
void is_alphanum(char ch[],int n)
{

int i,dig=0,alphabet=0;
for(i=0;i<n;i++)
{
   if(ch[i]>='A'&& ch[i]<='z'|| ch[i]>='a'&& ch[i]<='z')
   {
     alphabet=1;
   }
   if(ch[i]>='1'&& ch[i]<='9')
   {
     dig=1;
   }
}
 if(alphabet==1 && dig==1)
  {
    printf("you entered string is alphanumeric\n");
  }
  else
  {
    printf("you entered string is not alphanumeric\n");
  }
  
}
int main()
{
  char str[20];
  printf("Enter the string\n");
  fgets(str,20,stdin);
  is_alphanum(str,20);
  return 0;
}
