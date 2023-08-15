#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the element(Every element should be distinct) %d:\t",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    printf("Number of pairs = %d",count);
    return 0;
}
