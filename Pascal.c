#include<stdio.h>
int main()
{
    int a,b=1,c,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(c=1;c<=a-i;c++)
          printf("  ");
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
              b=1;
            else
              b=b*(i-j+1)/j;
            printf("%4d",b);
        }
        printf("\n");
    }
    return 0;
}
