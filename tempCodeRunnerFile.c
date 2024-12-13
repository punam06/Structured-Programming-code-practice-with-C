#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,i);
    }
    printf("%d",sum);
    return 0;

}