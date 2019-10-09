#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float x;
    int c,n=0;
    x=get_float("Change owed:");
    while(!(x>0))
    {
        x=get_float("Change owed:");
    }    
    c = round(x * 100);
    while((c-25)>=0)
    {
        n++;
        c=c-25;
    }
    while((c-10)>=0)
    {
        n++;
        c=c-10;
    } 
    while((c-5)>=0)
    {
        n++;
        c=c-5;
    }    
    while((c-1)>=0)
    {
        n++;
        c=c-1;
    }
    printf("%i\n",n);
} 
