//Write a C program to find reverse of any number using recursion


#include<stdio.h>
int rem,rev;
int reverse_number(int num)
{    
   if(num>0)
	{
	    rem=num%10;       //num=123---- 123%10= 3 ,  12%10=2  1%10
	    rev= rev*10+rem;    //   rev=0+3 ------30+2=32, 
	   reverse_number(num/10);
	}
	   else 
	   {
	   return 0;
	   }
		return rev;
}
int main()
{   
 int num,res;
	printf("Enter the Number between \n");
	scanf("%d",&num);
   res=reverse_number(num);
   printf("The reverse number is = %d",res);
	
}
