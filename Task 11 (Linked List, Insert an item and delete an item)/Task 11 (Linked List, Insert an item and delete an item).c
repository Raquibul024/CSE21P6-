#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert ();
void begin_delete();
void display();

void main ()
{
    int choice =0;
    printf("\n.......Main Menu.......\n");
    while(choice != 4)
    {
        printf("\nChoose one option from the following list ...\n");
        printf("\n..........................\n");
        printf("\n1.Insert in beginning \n2.Delete from the beginning \n3.Display \n4.Exit\n");
               printf("\nEnter your choice: ");
               scanf("\n%d",&choice);
               switch(choice)
        {
        case 1:
            beginning_insert();
                break;
            case 2:
                beginning_delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Please enter valid choice..");
            }
    }
}

void beginning_insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted\n");
    }

}

void beginning_delete()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the beginning ...\n");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print\n");
    }
    else
    {
        printf("\n printing values . . . . .\n");
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr -> next;
        }
    }
}
