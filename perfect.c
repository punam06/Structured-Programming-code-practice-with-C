//perfect number
/*
#include<stdio.h>
int main()
{
    int i,n,sum=0,rem;
    printf("Enter a number:\n");
    scanf("%d",&n);
   for(i=1;i<n;i++)
   {
    rem=n%i;
   
   if(rem==0)
   {
    sum=sum+i;
   }
   }
   if(sum==n)
   {
    printf("It is a strong number.\n");
   }
   else{
    printf("It is not a strong number.\n");
   }
   return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,n,j,rem,temp,sum=0,start,end;
    printf("Enter starting and ending value:\n");;
    scanf("%d %d",&start,&end);
    printf("Perfect numbers from %d to %d are:\n",start,end);
    for(i=start;i<=end;i++)
    {
sum=0,temp=i;
for(j=1;j<temp;j++)
{
    rem=temp%j;

if(rem==0)
{
    sum=sum+j;
}
    }
    if(sum==i)
    {
        printf("%d\n",i);
    }

    }
return 0;
}