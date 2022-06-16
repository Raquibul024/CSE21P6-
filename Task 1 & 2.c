#include <stdio.h>
int main ()
{
int arr[] = {1,3,8,10};
int n=4;
int i;
printf (" The data in the array is : ");
for (i = 0; i<n; i++)

        printf ("%d\n",arr[i]) ;

     int j,k ;
printf (" Enter the position of data to delete : ");
scanf ("%d", &k );
    j = k ;
        while (j < n)
        {
            arr [j-1] = arr [j];
            j++ ;
        }
    n=n-1;
    printf("\n The data left in the after deletion : ");
    for ( i=0;i<n ; i++)
    {
        printf ( " %d ", arr [i]);
    }

    return 0;
}

