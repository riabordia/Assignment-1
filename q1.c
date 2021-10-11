
//Write a C compiler to check whether a given number is a valid floating point number or not. Write for all possible all test cases. Example: input: 2.0 output: valid input: 1. output: invalid


#include<stdio.h>

int main()
{
    char ch[1000];
    printf("Enter the value: \n");
    scanf("%s",ch);

    int i=0,p=0,q=0;

    while(ch[i]!='\0')
    {
        if(ch[i]=='.')
        {
            p++;
            if(ch[i+1]!='\0')
            q++;
        }
        i++;
    }
    
    if(p==1 && q==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
    return 0;
}
