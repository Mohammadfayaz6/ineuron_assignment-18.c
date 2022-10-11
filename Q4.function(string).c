//4. Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
char transform_string(char ch[])
{ 
   printf("%s",strupr(ch));
  
}   
    int main()
{
    char str[]="my sirg and ineuron";
    transform_string(str);

    return 0;
}