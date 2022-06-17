#include <stdio.h>
int main ()
{
    int arr[] = {10,20,30,40,50};
    int max = arr[0];
    int i, j=5, loc=1;
    printf ("Given Array : \n");
    for (i=0; i<j; i++)
    {
        printf("\t arr[%d] = %d\n", i, arr[i]);
    }
    for (i=0; i<j; i++)
        {
            if (arr[i]>max)
            {
                max = arr [i];
                loc = i;
            }
        }
        printf("\n Max value = %d, \t Location = %d", max, loc);
        return 0;
}
