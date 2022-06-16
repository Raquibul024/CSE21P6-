#include<stdio.h>
int main()
{
    int arr[]={5,10, 20, 40};
    int x;
    int i, n=4;
    printf("The given array is: ");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter the data to search: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
        if(x==arr[i])
    {
       printf("\nFound\n");
       exit (0);
    }
    printf("\nNot Found\n");
    return 0;
}
