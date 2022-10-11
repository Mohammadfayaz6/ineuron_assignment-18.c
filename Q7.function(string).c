//7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>

int is_palindrome(char ch[])
{
  int i,len;
  len=strlen(ch);
   for(i=0;i<len/2;i++)
    {
       if(ch[i]!=ch[len-1-i])
       {
           return 0;
       }
      
    }
       if(i==len/2)
       {  
          return 1;
       }
    
}

int main()
{
    char str[20];
    printf("Enter the string\n");
    gets(str);
   if(is_palindrome(str))
   {
     printf("palindrome string"); 
   }
   else
   {
     printf("not a palindrome string");
   }
    return 0;
}