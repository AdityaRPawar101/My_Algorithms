#include<stdio.h>

void Tower_of_Hanoi(int, char, char, char);
int pow(int, int);

main()   //driver code
{
  int n;
  
  printf("Program to find moves for Tower of Hanoi puzzle using recursion\n");
  printf("Author : Aditya Pawar \n");
   printf("Reg.No.:- 21BCE11104\n");   
   printf("Experiment Date: 02-02-2022 \n");                                       //self details                   
   printf("Submission Date : 27-03-2022 \n\n");
  printf("Enter the number of disks: ");
  scanf("%d",&n);  //input for no of disks
  Tower_of_Hanoi(n, 'S','A','D'); //calling of Recursive Tower of Hanoi
  printf("Total no of disks moves:= %d",pow(2,n)-1);
}

//This function prints the required moves of disks to solve Tower of Hanoi puzzle
void Tower_of_Hanoi(int n, char S, char A, char D)
{
  if(n==1)
  {
    printf("Move disk from %c to %c\n", S, D);
    return;
  }
  else
  {
   Tower_of_Hanoi(n-1,S,D,A);
   printf("Move disk from %c to %c\n", S, D);
   Tower_of_Hanoi(n-1,A,S,D);
  }
}

int pow(int x, int y)
{
	int res=1;
	for(int i = 1; i<=y; i++)
	{
		res = res*x;
	}
	return res;
}

