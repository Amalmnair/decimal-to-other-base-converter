/*
Program to convert a decimal number into hexadecimal or binary or octal number
created by : AMAL M NAIR
*/
#include<stdio.h>						//header file for standard input and output functions
#include<stdlib.h>						//header file for system("clear");
void bin(int);							//function prototype
void oct(int);							//function prototype
void hex(int);							//function prototype
void main()							// function definition
{
int op,n,ch;							//declaration of variables
do								// lopping starts
{
system("clear");						//to clear the screen
printf("\n \tBASE CONVERTER\n\n");
printf("\n Enter the decimal number\n");
scanf("%d",&n);							//input the number
printf("\n1.Binary\t\t2.Octal\t\t3.Hexadecimal\n");
scanf("%d",&op);
switch(op)							//switch case
{
case 1:
bin(n);
break;
case 2:
oct(n);
break;
case 3:
hex(n);
break;
default:
printf("\nINVALID ENTRY\n");
}
printf("Do you want to try again?(1.Yes/2.No)\n");		//option
scanf("%d",&ch);
}
while(ch==1);
}
void bin(int n)							//to convert into binary
{
	int rem,i,a[30];
	i=0;	
	while(n>0)
	{		
		rem=n%2;
		a[i]=rem;
		i++;
		n=n/2;
	}
	printf("The Binary number is :\n");
	i--;
	while(i>=0)
	{
		printf("%d",a[i]);
		i--;
	}
	printf("\n\n");
}
void oct(int n)							//to convert into octal
{
	int rem,i,a[30];
	i=0;	
	while(n>0)
	{		
		rem=n%8;
		a[i]=rem;
		i++;
		n=n/8;
	}
	printf("The Octal number is :\n");
	i--;
	while(i>=0)
	{
		printf("%d",a[i]);
		i--;
	}
	printf("\n\n");
}
void hex(int n)							//to convert into hexadecimal
{
	int rem,i,a[30];
	i=0;	
	while(n>0)
	{		
		rem=n%16;
		a[i]=rem;
		i++;
		n=n/16;
	}
	printf("The Hexadecimal number is :\n");
	i--;
	while(i>=0)
	{
		if(a[i]==10)
		printf("A");
		else if(a[i]==11)
		printf("B");
		else if(a[i]==12)
		printf("C");
		else if(a[i]==13)
		printf("D");
		else if(a[i]==14)
		printf("E");
		else if(a[i]==15)
		printf("F");		
		else		
		printf("%d",a[i]);
		i--;
	}
	printf("\n\n");
}
