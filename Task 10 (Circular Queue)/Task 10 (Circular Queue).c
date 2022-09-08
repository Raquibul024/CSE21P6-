#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define MAX 5
int cq[MAX];
int front = -1;
int rear = -1;

void insert(int item)
{
    if(front==(rear+1)%MAX)
        {
            printf("\n\nQueue Overflow\n\n");
            return;
        }
     else
        {
            if(front == -1)
                front = rear = 0;
            else
                rear = (rear+1)%MAX;
            cq[rear] = item;
        }
}

void del()
{
    int item;
    if(front == -1)
        {
            printf("\n\nQueue Underflow\n\n");
        }
    else
        {
            item = cq[front];
            printf("\n\nDeleted element from the queue is: %d\n\n",item );
            if(front == rear) //only one element
                front = rear = -1;
            else
                front = (front+1)%MAX;
        }
}

void display()
{
    int i ;
    if(front == -1)
        {
            printf("\n\nCircular Queue Empty\n");
        }
        else
            {
                printf("\nCircular Queue contents:\n");
                for(i = front; i != rear ; i = (i+1)%MAX)
                    {
                        printf(" %d", cq[i]);
                    }
                    printf(" %d", cq[i]);
            }
    printf("\n\n");
}
int main()
{
    int choice,item;
    while(1)
    {
        printf("\n----MENU----\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
            {
                case 1 :
                    printf("\nInput the element for insertion in queue : ");
                    scanf("%d", &item);
                    insert(item);
                    break;
                case 2 :
                    del();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    exit(0);
                default: printf("\nEnter a valid choice\n");
            }
    }
    return 0;
}
