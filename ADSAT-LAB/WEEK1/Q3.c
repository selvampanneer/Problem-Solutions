int ls_recursive(int n,int arr[],int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[n-1]==key)
    {
        return n-1;
    }
    else
    {
        return ls_recursive(n-1,arr,key);
    }
}
int main()
{
    int n,i,key;
    printf("Enter the number of elements:\t");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the element %d:\t",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element:\t");
    scanf("%d",&key);
    int result = ls_recursive(n,arr,key);
    if(result==-1)
    {
        printf("The key element is not found");
    }
    else
    {
        printf("The key element %d is found at the position %d as the first occurence from the end of the list.",key,resul+1);
    }
    return 0;
}
