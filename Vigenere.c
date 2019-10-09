#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int shift(char ch);
int main(int argc, string argv[])
{
        string txt,cipher;
        int l,n,p,c,v,i,h=0,l1,k,flag=0,chk;
        if(argc!=2)
        {
            printf("Usage: ./vigenere keyword\n");
        }
        else
        { 
            l1=strlen(argv[1]);
            char chr[l1];
            for(k=0;k<l1;k++)
            {
                if(((int)argv[1][k]>=65 && (int)argv[1][k]<=90) || ((int)argv[1][k]>=97 && (int)argv[1][k]<=122))
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
                n=0;
                l=strlen(txt);
                char nw[l];
                while(txt[n]!='\0')
                {
                    if(h==l1)
                    {
                        h=0;
                    }
                    v=shift(argv[1][h]);
                    if((int)txt[n]>=65 && (int)txt[n]<=90)
                    {    
                        p=((int)txt[n]);
                        c=p+v;
                        chk=90-c;
                        if(chk<0)
                        {
                            c=(-1)*chk;
                            c=c+64;
                        }
                        nw[n]=(char)c;
                        h++;
                    }
                    else if((int)txt[n]>=97 && (int)txt[n]<=122)
                    {
                        p=((int)txt[n]);
                        c=p+v;
                        chk=122-c;
                        if(chk<0)
                        {
                            c=(-1)*chk;
                            c=c+96;
                        }
                        nw[n]=(char)c;
                        h++;
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
                 printf("Usage: ./vigenere keyword\n");
            }
        }
}

int shift(char ch)
{
    int pos;
    if((int)ch>=65 && (int)ch<=90)
    {
          pos=(int)ch-65;
          return pos;
    }
    else if((int)ch>=97 && (int)ch<=122)
    {
          pos=(int)ch-97; 
          return pos;
    }
    else
    {
        return 0;
    }
}
