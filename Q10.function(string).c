//10. Write a function to find the repeated character in a given string.
#include<stdio.h>
void repeated_ch(char a[])
 {   
    int i,j,count;
    for(i=0;a[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j] && a[i]!=' ')
            {
                count++;
                a[j]='0';
           }    
       
        }
     if(count>1 && a[i]!='0')
        {
        printf("%c ",a[i]);
        }
    }
 }    
int main()
{
    char a[]="fayaz is good man";
     printf("repeated charecter in string is :\n");
    repeated_ch(a);
    
    return 0;
}