//checking prime number
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,isPrime=1;
printf("Enter a number:\n");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
    if(n%2==0)
    {
isPrime=0;
  }
     else
    {
isPrime=1;
    }
    
}
if(isPrime==0)
printf("It is not a prime number:\n");
if(isPrime==1)
printf("It is a prime number:\n");
return 0;

}
*/

// Printing prime numbers for a given range
#include<stdio.h>
int main()
{
int i,j,start,end,isPrime;
printf("Enter the starting and ending value:\n");
scanf("%d %d",&start,&end);
for(i=start;i<=end;i++)
{
    isPrime=1;
    if(i==1)
    {
        isPrime=0;
    }
else
{
for(j=2;j<=i/2;j++)
{
    if(i%j==0)
    {
        isPrime=0;
        break;
    }
}
   
 }

  if(isPrime==1)
   printf("%d\n",i);  
}
  
return 0;

}
