//2. Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
char* reverse_string(char ch[20])
{ 
   return strrev(ch); 
}
int main()
{
    char str[20];
    printf("Enter the string name\n");
    fgets(str,20,stdin);
    printf("The reverse of given string is :%s",reverse_string(str));
    return 0;
}