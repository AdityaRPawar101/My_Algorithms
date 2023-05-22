#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

typedef struct stack node;
node *start=NULL;
node *top = NULL;

//funciton to take choice for operations on stack
int menu()
{
    int ch;
    printf("\n \tStack operations using pointers.. ");
    printf("\n -----------**********-------------\n");
    printf("\n 1. Push ");
    printf("\n 2. Pop ");
    printf("\n 3. Display");
    printf("\n 4. Quit ");
    printf("\n Enter your choice:"); 
    scanf("%d", &ch);
    return ch;
}

//function to create a node for stack dynamically
node* getnode()
{
    node *temp;
    temp=(node *) malloc( sizeof(node)) ;
    printf("\n Enter data ");
    scanf("%d", &temp -> data);
    temp -> next = NULL; 
    return temp;
}

//function to push an element into the stack
void push(node *newnode)
{
    node *temp;
    if(newnode == NULL)
	{
        printf("\n Stack Overflow..");
        return;
	}
    if(start == NULL)
	{
        start = newnode;
        top = newnode;
    }
    else
	{
        top -> next = newnode;
        top = newnode;
    }
    printf("\n\n\t Data pushed into stack");
}

//function to pop an element from the stack
void pop()
{
    node *temp;
    if(top == NULL)
    {
        printf("\n\n\t Stack underflow"); 
        return;
    }
    temp = start;
    if( start -> next == NULL)
    {
        printf("\n\n\t Popped element is %d ", top -> data);
        start = NULL;
        free(top);
        top = NULL;
    }
    else
    {
        while(temp -> next != top)
		{
            temp = temp -> next;
		}
        temp -> next = NULL;
        printf("\n\n\t Popped element is %d ", top -> data);
        free(top);
        top = temp;
    }
}

//function to display the elements in a stack
void display()
{
    node *temp;
    if(top == NULL)
	{
        printf("\n\n\t\t Stack is empty ");
    }
    else
    {
        temp = start;
        printf("\n\n\n\t\t Elements in the stack: \n");    
        while(temp != NULL)
		{       
            printf("%5d ", temp -> data);
            temp = temp -> next;
		}
    }
}

//main function
main()
{
    int ch;
    node *newnode;
  
    printf("Program for linked list implementation of a stack \n");
    printf("Author :-Aditya Pawar \n");
    printf("Reg. No.:-21BCE11104 \n");
    printf("---------------------------------------------------------------------------------------------------------------");
    
	do
    {
        ch = menu();
        switch(ch)
		{
            case '1' :
                newnode = getnode();
                push(newnode); 
                break;
            case '2' :
                pop();
                break;
            case '3' :
                display();
                break;
            case '4':
                exit(0);
		}
        getch();
	} 
	while( ch != '4' );
}
