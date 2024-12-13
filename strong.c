/*//strong number checking

#include<stdio.h>
int main()
{
    int i,n,fact=1,temp,rem,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
if(sum==n)
{
    printf("It is a strong number.\n");
}
else
{
    printf("it is not a strong number.\n ");
}
return 0;
}
*/
#include<stdio.h>
int main()
{
    int i,j,n,sum=0,temp,rem,fact=1,start,end;
    printf("Enter the starting and ending value:\n");
    scanf("%d %d",&start,&end);
    printf("The strong numbers between %d and %d are:\n",start,end);
    temp=i;
    for(i=start;i<=end;i++)
    {
        int sum=0;
        temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            temp=temp/10;
            fact=1;
            for(j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;

        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}