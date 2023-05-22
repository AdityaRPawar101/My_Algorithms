//C++ PROGRAM TO CONVERT INFIX EXPRESSION TO PREFIX EXPRESSION
#include <stdio.h>
#include <conio.h>
#include <string.h>

char prefix[50]; 
char infix[50];
char opstack[50]; /* operator stack */ 
int j, top = 0;

//function to insert the input character ch (operator or operand) in the beginning of the prefix string
void insert_beg(char ch)
{
    int k;
    if(j == 0)
    prefix[0] = ch;
    else
	{
        for(k = j + 1; k > 0; k--)
		    prefix[k] = prefix[k-1];
            prefix[0] = ch;	   	
	} 
	j++;
}

//function retruns 1 if the scanned operator symbol in infix expression has less precedence than the operator symbol on top of the stack
int lesspriority(char op, char op_at_stack)
{
    int k;
    int pv1; /* priority value of op */
    int pv2; /* priority value of op_at_stack */ 
    char operators[] = {'+', '-', '*', '/', '%', '^', ')'};
    int priority_value[] = {0, 0, 1, 1, 2, 3, 4}; 
    if(op_at_stack == ')' )
	    return 0;
    for(k = 0; k < 6; k ++)
	{
        if(op == operators[k])
        pv1 = priority_value[k];
	}
    for(k = 0; k < 6; k ++)
	{
	    if( op_at_stack == operators[k] ) 
		    pv2 = priority_value[k];
	}
    if(pv1 < pv2)
	    return 1;
    else
        return 0;
}

//function to push scanned operator from infix expression onto stack after precedence comparison with stack's top symbol
void push(char op) /* op – scanned operator */
{
    if(top == 0)
	{
   	    opstack[top] = op; 
	    top++;
	}
    else
	{
        if(op != ')')
		{
            while(lesspriority(op, opstack[top-1]) == 1 && top > 0)
			{
			    insert_beg(opstack[--top]);
			}
		}
		opstack[top] = op; /* pushing onto stack */ 
		top++;
	}
}

//function to pop all stack elements until ')' comes on top
void pop()
{
    while(opstack[--top] != ')') /* pop until ')' comes; */ 
    insert_beg(opstack[top]);
}

//main function
main()
{
    printf("  Program for conversion of an infix expression into prefix expression \n");
    printf("  Author :-Aditya Pawar \n");
    printf("  Reg.No.:-21BCE11104\n");
    printf("----------------------------------------------------------------------------------");
    char ch; 
    int l, i = 0; 
    printf("\n\n Enter Infix Expression : ");
    gets(infix);
    l = strlen(infix); 
    while(l > 0)
	{
        ch = infix[-- l]; 
	    switch(ch)
		{
            case ' ' : break;
            case ')' :
            case '+' :
            case '-' :
            case '*' :
            case '/' :
            case '^' :
            case '%' :
                push(ch); /* check priority and push */ 
		        break;
            case '(' :
                pop(); 
				break;
            default :
                insert_beg(ch);
        }
	}
    while( top > 0 )
	{
        insert_beg(opstack[--top]); 
	    j++;
	}
    prefix[j] = '\0';
    printf("\n Infix Expression : %s ", infix); 
	printf("\n Prefix Expression : %s ", prefix); 
	getch();
}

