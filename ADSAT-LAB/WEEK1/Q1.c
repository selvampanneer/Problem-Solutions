#include<stdio.h>
#include<stdbool.h>
#include<Math.h>
int main()
{
    int n,N,i,j;
    printf("Enter the value of the upper bound of number of digits that can be present in the array:\t");
    scanf("%d",&n);
    printf("Enter the size of the array:\t");
    scanf("%d",&N);
    int a[N];
    int b[N];//to store the count of digits for each element in the array
    bool c[N];//to mark whether each element satifies all the conditions
    for(i=0; i<N; i++)
    {
        printf("Enter the element %d:\t",i+1);
        scanf("%d",&a[i]);
        b[i]=0;
        c[i]=0;
    }
    int x  = n;
    for(i=0; i<N; i++)
    {
        x = n;

        while(pow(10,x)-1 >= a[i]) //counts the number of digits
        {
            x--;
        }
        b[i]=x+1;


    }
    int l,m=-1,p=-1,count1,count2=0;
    for(i=0; i<N; i++)
    {
        x=b[i];
        p=-1,m=-1,count1=0,count2=0;
        l = a[i];
        while(x--) //to find whether all the digits of an element are in strictly increasing or decreasing order
        {
            p=m;
            m = l%10;
            if(p==-1)
            {
                p=m;
                count1++;
                count2++;
                l/=10;
                continue;
            }
            if(m>p)
            {
                count1++;
            }
            if(m<p)
            {
                count2++;
            }
            l/=10;
        }
        if(count1==b[i] || count2==b[i])
        {
            c[i]=true;
        }
    }
    x=1;
    while(x<=N)
    {
        count1=0;
        for(i=0; i<N; i++)
        {
            if(b[i]==x && c[i]==true)
            {
                printf("%d\t",a[i]);
                count1++;
            }
        }
        if(count1>=1 && x<N)
        {
            printf("\n");
        }
        x++;
    }
    return 0;
}
