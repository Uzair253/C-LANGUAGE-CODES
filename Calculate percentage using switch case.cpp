#include<stdio.h>
#include<cmath>
int main()
{
	float  a,b;
	printf("Enter Your obtained marks out of 1100\n");
	scanf("\n%f",&a);
	b=(a/1100)*100;
	printf("your percantage is = %.2f % \n",b);
	switch(b);
	{
	
	case: (b>=80)
	
	
	printf("you have secured A1 grade\n")
	break
	case: (b<80 && b>70)
	printf("you have secured A grade\n");
	    
	
	case: (b<70 && b>60)
	printf("you have secured B grade\n");
	case:(b<60 && b>50)
	 printf("you have secured C grade\n");
	default:
	printf("You're Fail\n");}
	return 0;
	}
	
	