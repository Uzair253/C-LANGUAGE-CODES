#include<stdio.h>
#include<cmath>
int main()
{	float a; 
	int b,c=(b>=80),d=(b<80 && b>70),e=(b<70) && (b>60),f=(b<60) && (b>50);
	printf("Enter Your obtained marks out of 1100\n");
	scanf("\n %d",&a);
	b=(a/1100)*100;
	printf("your percantage is = %d % \n",b);
	switch (b)
	{
	case 'c':
	 
	printf("you have secured A1 grade\n");
	break;
	case'd':
	 printf("you have secured A grade\n");
	break;
	    
	case 'e':
	printf("you have secured B grade\n");
	break;
	case 'f':
	 printf("you have secured C grade\n");
	break;
	default:
	printf("You're Fail\n");
	return 0;
}}
	
	
	