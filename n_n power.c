#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,temp,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=1;
        for(j=1;j<=i;j++)
        {
            temp=temp*i;
        }
         printf("%d\n",temp);
        sum=sum+temp;
    }
   
    printf("The sum is %d",sum);
    return 0;

}