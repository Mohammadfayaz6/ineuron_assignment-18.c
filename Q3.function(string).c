//3. Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
 void to_comp_string(char ch1[20],char ch2[20])
{ 
   int x=strcmp(ch1,ch2); 
   if(x==0)
   {
      printf("strings are same\n");
   }
   else
   {
      printf("strings are not same");
   }
    

}
int main()
{
    char str1[20];
    char str2[20]; 
    printf("Enter the string one name\n");
    fgets(str1,20,stdin);
    printf("Enter the string two name\n");
    fgets(str2,20,stdin); 
    to_comp_string(str1,str2);
   
    return 0;
}    
   