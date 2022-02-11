#include <stdio.h>
#include <cmath>
int main()
{
	char  name[30];
	char shopname [40] ;
	int totalbill,nooforders,quantity,ordernumber ,amount;
	totalbill=0;
	

	printf("what is your good name sir/madam?\n");
	scanf("%s",&name);
	{//MENU
		printf("---------------------------------Menu---------------------------------\n");
		printf("No Items						Prices\n");
		printf( "\n");
		printf(" Susage						Rs:220\n");
		printf("2) Cheese and Mushroom Omelet	 Rs:50\n");
		printf("3) Paratha						Rs:25\n");
		printf("4) French Toast						Rs:45\n");
		printf("5) Coffee						Rs:120\n");
		printf("6) Tea							Rs:40\n");
		printf("7) Pan cake with Nutella serving			Rs:395\n");
		printf("----------------------------------------------------------------------\n");
	}
	printf("customer name \n");
	printf("How many itemms you want to order\n");
	scanf("%d",&nooforders);
	if( nooforders >=1)

{
for(int i=1;i<=nooforders;i++)
{
	printf("	Please Enter Code of menu\n");
	scanf("%d",&ordernumber);
	if(ordernumber==1)
	{
	printf("what is quantity\n");
	scanf("%d",&quantity);
	printf("sausage ordered \n");
	amount= 220 * quantity;
	}
	else if(ordernumber==2)
	{
	printf("what is quantity\n");
	scanf("%d",&quantity);
	printf("mushroom and cheese omelet ordered\n");
	amount= 50 *quantity;
	}
	else if(ordernumber==3)
	{
	printf("what is quantity\n");
	scanf("%d",&quantity);
	printf("paratha ordered\n");
	amount= 25 *quantity;
	}
	else if(ordernumber==4)
	{
	printf("what is quantity\n");
	scanf("d",&quantity);
	printf("french toast\n");
	amount= 45 *quantity;
	}
	else if(ordernumber==5)
	{
	printf("what is quantity\n");
	scanf("%d",&quantity);
	printf("coffee ordered\n");
	amount= 120 *quantity;
	}
	else if(ordernumber==6)
	{printf(" what is quantity\n");
	scanf("d%",&quantity);
	printf("tea ordered\n");
	amount= 40 *quantity;
	}
	else if(ordernumber==7)
	{
	printf("what is quantity\n");
    scanf("%d",&quantity);
	printf("pan cake with nutella serving ordered\n");
	amount=395*quantity;
	}
	else
	{
	printf("not available\n");
	}
	totalbill=totalbill+amount;
	amount=0;
	quantity=0;
    }   
	
{
	printf("Your total bill is %d\n",amount );
}
}
else  

{
		printf("You entered 0 No. Of order\n");

	}	return 0;

}
