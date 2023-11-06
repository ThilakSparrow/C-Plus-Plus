//Fibonacci Series

#include<iostream>
using namespace std;

int main()
{
	int num1 , num2 , nextnum , limit ;
	
	cout<<"Enter the Series Limit: ";
	cin>>limit;
	
	cout<<"\nEnter the First Number : ";
	cin>>num1;
	
	cout<<"\nEnter the First Number : ";
	cin>>num2;
	
	cout<<"\nThe Fibonacci Series : ";
	cout<<num1<<"\t"<<num2<<"\t";
	
	for(int i = 2 ; i < limit ; i++)
	{
		nextnum = num1 + num2;
		num1 = num2;
		num2 = nextnum;
		cout<<nextnum<<"\t";
	}
	
	return 0;
}
