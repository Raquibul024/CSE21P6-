
#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("Enter the size of STACK : ");
    scanf("%d",&n);
    while(1)
        {
            printf("\n ......MENU......\n");
            printf("\n 1.Create\n 2.Push\n 3.Pop\n 4.Display\n 5.Exit");
            printf("\nEnter your Choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    create();
                    break;
                case 2:
                    push();
                    break;
                case 3:
                    pop();
                    break;
                case 4:
                    display();
                    break;
                case 5:
                    printf("\nExiting...");
                    break;
                default:
                printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
            }
        }
}
void create()
{
    int i;
    printf("\nEnter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&stack[i]);
        top++;
        stack[top]=stack[i];
    }
    display();
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\nSTACK is full\n\n");
    }
    else
    {
        printf("Enter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    display();
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe elements in stack:");
        for(i=top; i>=0; i--)
            printf("\n\t%d",stack[i]);
    }
    else
    {
        printf("\nThe stack is empty");
    }
}
