#include<iostream>
#include<cmath>
using namespace std;
int main()
//marks from  user//
{
	float  a,b;
	cout<<"Enter Your obtained marks out of 1100"<<endl;
	cin>>a;
	b=(a/1100)*100;
	
	cout<<"your percantage is ="<<b<<"%"<<endl;
	if(b>=80)
	{ cout<<"you have secured A1 grade"<<endl;}
	else if(b<80 && b>70)
	{ cout<<"you have secured A grade"<<endl;
	    
	}
	else if(b<70 && b>60)
	{ cout<<"you have secured B grade"<<endl;}
	else if(b<60 && b>50)
	{ cout<<"you have secured C grade"<<endl;}
	else
	{cout<<"You're Fail"<<endl;}
	return 0;
	}
	
	
	5
	
	
