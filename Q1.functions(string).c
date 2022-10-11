//1. Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
char calculte_len_string(char ch[20])
{ 
   return strlen(ch); 
}
int main()
{
    char str[20];
    printf("Enter the string name\n");
    fgets(str,20,stdin);
    printf("The length of string is :%d",calculte_len_string(str));
    return 0;
}