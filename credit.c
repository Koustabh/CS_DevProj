#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long x,j,k,org;
    int c=1,r,sum=0,p=0,pr;
    x=get_long("Number: ");
    org=x;
    while(!(x>0))
    {
         x=get_long("Number: ");
    }
    while(x!= 0)
    {
        r=x%10;
        x=x/10;
        if(c%2==0)
        {
           p=r*2;
           while(p!=0)
           {
              pr=p%10;
              p=p/10;
              sum=sum+pr;
            }
        }
        else
        {
            sum=sum+r;
        }
        c++;
    }
   if(sum%10==0)
   {
       k=pow(10,c-3);
       j=org/k;
       if(j==51||j==52||j==53||j==54 ||j==55)
           printf("MASTERCARD\n");
       else if(j==34||j==37)
           printf("AMEX\n");
       else
       {
           k=pow(10,c-2);
           j=org/k;
           if(j==4)
               printf("VISA\n");
           else
               printf("INVALID\n");
       }
   }
    else
        printf("INVALID\n");   
}
