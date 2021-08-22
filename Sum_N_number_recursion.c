//Write a C program to find sum of all natural numbers between 1 to n using recursion

#include<stdio.h>
int sumOfNumber(int num)
{    int sum;
    
    if(num>0)
    {
	  return (num+sumOfNumber(num-1));
	}
	 else 
	 return 0;
}
int main()
{   
 int num;
	printf("Enter the Number between \n");
	scanf("%d",&num);
   sumOfNumber(num);
	printf("%d", sumOfNumber(num));
}
