#include<stdio.h>

int NonBinRec (int);


main()
 {
   printf("Program to determine the number of bits to represent a given decimal number in binary form using NonBinRec \n");
   printf("\n Author:- Aditya Pawar");
	printf("\n Reg. No.:- 21BCE11104");
	printf("\n Experiment Date:- 04-02-2022");
	printf("\n Submission Date:- 27/03/2022");
   	printf("\n------------------------------------\n");
   int n, bits;
   printf("\nEnter the Decimal Number: ");
   scanf("%d",&n);
   bits = NonBinRec(n);
   printf("\n%d bits are required to represent the decimal number %d in binary form", bits,n);
 }
 
 int NonBinRec(int n)
 {
 	int count = 1;
 	while (n>1)
 	{
 	  count = count+1;
 	  n = n/2;
	}
	return count;
 }
 
