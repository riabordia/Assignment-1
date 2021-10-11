//Write a C program to check whether a given email is valid or not. 


#include<stdio.h>

int main()

{

    printf("Enter any email address: ");

    char a[1000];

    scanf("%s",a);

    int i=0;

    int ch=0;

    int t=0;

    int p=-1,q=-1;

    

    while(a[i]!='\0')

    {

        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z') || (a[i]>='0' && a[i]<='9'))

            ch=1;

        else if((a[i]=='.' || a[i]=='-'  || a[i]=='_' || a[i]=='@') && (i!=0 && a[i+1]!='\0'))

            ch=1;

        else

        {

            ch=-1;

            break;

        }

        if(a[i]=='@')

        {

            t++;

            p=i;

        }

        if(t>1)

        {

            ch=-1;

            break;

        }

        if(a[i]=='.')

        {

            q=i;

        }

        i++;

    }

    if(q-p<2)

        ch=-1;

    if(ch==1)

        printf("Valid Email Address\n");

    else

        printf("Invalid Email Address\n");
       

}

