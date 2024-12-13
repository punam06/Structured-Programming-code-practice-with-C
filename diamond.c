#include<stdio.h>
int main()
{
    int i,n,j,space;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("The required pattern is:\n");
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=(n-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
                printf(" * ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for(i=n-1;i>=0;i--)
    {
        for(space=1;space<=(n-i);space++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
       {
            if(j==1||j==i)
                printf(" * ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}