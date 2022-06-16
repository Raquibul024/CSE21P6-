#include<stdio.h>
#include<conio.h>
int n, a[50];
void create()
{
    int i;
    printf("Enter the value of N: \n");
    scanf("%d",&n);
    printf("Enter %d array elements: \n", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    display();
}
void display()
{
    int i ;
    printf("Entered elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n-------------------------------\n\n");
}
void insertion()
{
    int i,pos,elem;
    printf("Enter a valid position where element to be inserted: ");
    scanf("%d", &pos);
    if (pos>n )
    {
        printf("Entered position is not valid\n");
        insertion();
    }
    printf("Enter the value to be inserted: \n");
    scanf("%d", &elem);
    for(i=n; i>=pos ; i--)
    {
            a[i+1] = a[i];
    }
    a[pos] = elem;
    n+=1;
    display();
}
void deletion()
{
    int i,pos,elem;
    printf("Enter a valid position from where element to be deleted: \n");
    scanf("%d", &pos);
    if (pos>=n)
    {
        printf("Entered position is not valid\n");
        deletion();
    }
    while(pos<n){
        a[pos-1]=a[pos];
        pos++;
    }
    n-=1;
    display();
}
int main()
{
    int ch;
    while(1)
    {
    printf("1. Create\n 2. Display\n 3. Insertion\n 4. Delete\n 5. Exit");
    printf("\n\nEnter your Choice: ");
    scanf("%d",&ch);
    printf("\n");
    switch(ch)
    {
        case 1: create();
        break;
        case 2: display();
        break;
        case 3: insertion();
        break;
        case 4: deletion();
        break;
        case 5: exit(0);
        }

    }
}
