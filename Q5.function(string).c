//5. Write a function to transform a string into lowercase
#include<stdio.h>
#include<string.h>
char transform_string(char ch[])
{ 
   printf("%s",strlwr(ch));
  
}   
    int main()
{
    char str[]="MY SIRG AND INEURON";
    transform_string(str);

    return 0;
}