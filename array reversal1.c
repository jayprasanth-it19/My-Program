  #include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("Enter no. of value");
    scanf("%d",&n);
    printf("Enter n elements to array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reversal order");
        for(i=n-1;i>=0;i--)
        {
            printf("%d",a[i]);
        }
    printf("\nOriginal array");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
