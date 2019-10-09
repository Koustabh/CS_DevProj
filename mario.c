#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x,i,j,k;
    x=get_int("Height:");
    while(!(x>0 && x<=8))
    {
        //printf("Wrong Input,Enter positive value of height greater than 0 and less than 9\n");
        x=get_int("Height:");
        if(x>0 && x<9)
            break;
    } 
    //printf("Stored:%i\n",x);
    for(i=1;i<=x;i++)
    {
        for(j=x-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("#");
        }
        printf("\n");
     }
  }
