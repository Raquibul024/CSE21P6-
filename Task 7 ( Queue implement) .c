#include<stdio.h>
int n, a[50];
int main()
{
    while(1){
    int ch;
    printf("1.Create queue\n 2.pop\n 3.push\n 4.display");
    printf("\nEnter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: create();
        break;
        case 2: pop();
        break;
        case 3: push();
        break;
        case 4: display();
    }
    }
}
void create()
{
    int i;
    printf("\nEnter the size of the queue: ");
    scanf("%d",&n);
    printf("\nEnter %d elements: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    display();
}
void pop()
{
    int pos=1;
    while(pos<n){
        a[pos-1]=a[pos];
        pos++;
    }
    n-=1;
    display();
}
void push()
{
    int elem, pos=n;
    n++;
    printf("\nEnter an element to enter in queue: ");
    scanf("%d",&elem);
    a[pos]=elem;
    display();
}
void display()
{
    int i;
    printf("\nThe queue is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n-------------------------------\n\n");
}
