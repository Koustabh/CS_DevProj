#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string txt,cipher;
    int l,n,p,c,as,v,i,len,k,flag=0;
   if (argc!=2)
    {
        printf("Usage: ./caesar key\n");
    }
    else if(atoi(argv[1])<0)
    {
        printf("Usage: ./caesar key\n");
    }
    else
    {
           len=strlen(argv[1]);
            char chr[len];
        for(k=0;k<len;k++)
        {
            if((int)argv[1][k]>=48 && (int)argv[1][k]<=57)
            {
                        flag=1;
            }
            else
            {
                        flag=0;
                        break;
            }
        }
        if(flag==1)
        {    
        txt=get_string("plaintext: ");
        v=atoi(argv[1]);
        n=0;
        l=strlen(txt);
        char nw[l];
        while(txt[n]!='\0')
        {
            if((int)txt[n]>=65 && (int)txt[n]<=90)
            {    
                p=((int)txt[n])-64;
                c=(p+v)%26;
                as=c+64;
                nw[n]=(char)as;
            }
            else if((int)txt[n]>=97 && (int)txt[n]<=122)
            {
                p=((int)txt[n])-96;
                c=(p+v)%26;
                as=c+96;
                nw[n]=(char)as;
            }
            else
            {
                nw[n]=txt[n];
            }
            n++;
        }
        printf("ciphertext: ");
        for(i=0;i<n;i++)
        {
            printf("%c",nw[i]);
        }
        printf("\n");
       }
        else
        {
            printf("Usage: ./caesar key\n");
        }
    }
}
© 2019 GitHub, Inc.
