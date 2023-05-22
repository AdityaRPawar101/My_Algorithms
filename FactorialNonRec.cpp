#include<stdio.h>


int NonRecfactorial (int);

main()
 {
   printf("Program for Factorial of a non negative integer with Non recursive (Iterative) function \n");
   printf("Author : Dr. Paras Jain \n");   
   printf("Experiment Date: 31-01-2022 \n");                                       //self details                   
   printf("Submission Date : \n\n");
   int num, fac;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    fac = NonRecfactorial(num);
    printf("\nThe factorial of %d is %d \n", num, fac);
    
 }
 
 int NonRecfactorial (int n)
 {
   int i, fact = 1;
   for(i=1;i<=n;i++)
   {
   	 fact = fact*i;
   }
   return fact;
 }
