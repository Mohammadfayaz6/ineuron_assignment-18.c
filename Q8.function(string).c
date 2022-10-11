//8. Write a function to count words in a given string
#include<stdio.h>
#include<string.h>
void calculate_words(char *ch)
{
    int i,count=0;
    for(i=0;ch[i];i++)
    {
      if(ch[i]==32)
        
        {
            count++;
        }
    }
    if(i>0)
    {
        count++;
    }
    printf("%d",count);
}
int main()
{
    char str[100];
    printf("Enter any string\n");
    fgets(str,100,stdin);
    calculate_words(str);

    return 0;
}