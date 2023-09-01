#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,x=11,y=11,k;
    for(i=1;i<=9;i++,x--)
    {
        for(j=1;j<=21;j++)
        {
            if((j>i&&j<x)||(j>=11+i&&j<=21-i))//+i and -i krne ki wajah se 2 spaces ka gap automatic mil rha hai
              printf(" ");
            else if(j==y)
            {
                for(k=1;k<=2*i-1;k++)
                  printf("*");
            }
            else
               printf("*");
            y--;
        }
        printf("\n");
    }
    return 0;
}