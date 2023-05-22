#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 6

int Q[MAX];
int front, rear;

// fucntion to insert an element in linear queue
void insertQ()
{
    int data;
    if (rear == MAX)
    {
        printf("\n Linear Queue is full");
        return;
    }
    else
    {
        printf("\n Enter data: ");
        scanf("%d", &data);
        Q[rear] = data;
        rear++;
        printf("\n Data Inserted in the Queue ");
    }
}

// function to delete an element from a linear queue
void deleteQ()
{
    if (rear == front)
    {
        printf("\n\n Queue is Empty..");
        return;
    }
    else
    {
        printf("\n Deleted element from Queue is %d", Q[front]);
        front++;
    }
}

// function to display the elements present in a linear queue
void displayQ()
{
    int i;
    if (front == rear)
    {
        printf("\n\n\t Queue is Empty");
        return;
    }
    else
    {
        printf("\n Elements in Queue are: ");
        for (i = front; i < rear; i++)
        {
            printf("%d\t", Q[i]);
        }
    }
}

// function to ask choice from the user about an operation on linear queue
int menu()
{
    int ch;
    printf("\n\nQueue operations using ARRAY..");
    printf("\n -----------**** ------------ \n");
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
    printf("Program for the implementation of linear queue using array\n");
    printf("Submitted by :Aditya Pawar  \n");
    printf("Reg. No.:- 21BCE11104\n");
    printf("---------------------------------------------------------------\n");
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
    } while (1);
}
