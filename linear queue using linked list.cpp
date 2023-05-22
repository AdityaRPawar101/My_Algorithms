#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct queue
{
    int data;
    struct queue *next;
};

typedef struct queue node;
node *front = NULL;
node *rear = NULL;

// function to create a node dynamically to insert in linear queue
node *getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\n Enter data ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

// fucntion to insert an element in linear queue
void insertQ()
{
    node *newnode;
    newnode = getnode();
    if (newnode == NULL)
    {
        printf("\n Queue Full");
        return;
    }
    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    printf("\n\n Data Inserted into the Queue..");
}

// function to delete an element from a linear queue
void deleteQ()
{
    node *temp;
    if (front == NULL)
    {
        printf("\n\nEmpty Queue..");
        return;
    }
    temp = front;
    front = front->next;
    printf("\n\nDeleted element from queue is %d ", temp->data);
    free(temp);
}

// function to display the elements present in a linear queue
void displayQ()
{
    node *temp;
    if (front == NULL)
    {
        printf("\n\n Empty Queue ");
    }
    else
    {
        temp = front;
        printf("\n\n\n\t\t Elements in the Queue are: ");
        while (temp != NULL)
        {
            printf("%5d ", temp->data);
            temp = temp->next;
        }
    }
}

// function to ask choice from the user about an operation on linear queue
int menu()
{
    int ch;
    printf("\n\nQueue operations using pointers.. ");
    printf("\n\t-----------****-------------\n");
    printf("\n 1. Insert ");
    printf("\n 2. Delete ");
    printf("\n 3. Display");
    printf("\n 4. Quit ");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}

// main function
main()
{
    printf("Program for the implementation of linear queue using linked list\n");
    printf("Submitted by : Aditya Pawar \n");
    printf("Reg. No.:- 21BCE11104 :  \n"); // self details
    printf("-----------------------------------------------------------------------\n");
    int ch;
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            insertQ();
            break;
        case 2:
            deleteQ();
            break;
        case 3:
            displayQ();
            break;
        case 4:
            exit(0);
        }
        getch();
    } while (ch != 4);
}
