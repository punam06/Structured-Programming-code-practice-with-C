/*
//checking armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,sum=0,digit=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        digit++;
    }
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+pow(rem,digit--);
        }
    
    if(sum==n)
    {
        printf("It is an armstrong number.\n");
    }
    else 
   { printf("It is not an armstrong number.\n");
}

}
*/
//Printing armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,rem,start,temp,end,i,j,digit;
    printf("Enter the starting and ending range:\n");
    scanf("%d %d",&start,&end);
    printf("The armstrong numbers between %d to %d is:\n",start,end);
    for(i=start;i<=end;i++)
    {
        //counting digits
        temp=i,digit=0;
        while(temp!=0)
        {
            temp=temp/10;
            digit++;
        }
        sum=0,temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            temp=temp/10;
            sum=sum+pow(rem,digit);
        }
        if(sum==i)
    printf("%d\n",i);

    }
    return 0;
}