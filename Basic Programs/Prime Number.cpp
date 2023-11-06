#include<iostream>
using namespace std;

int main()
{
	int number , factors = 0, i;
	
	cout<<"Enter the number : ";
	cin>>number;
	
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			factors++;
		}
	}
	
	if(factors == 2)
	{
		cout<<number<<" is a Prime number ";
	}
	else
	{
		cout<<number<<" is Not a Prime number ";
	}
	
	return 0;
}
