#include<iostream>
using namespace std;

int main()
{
	int number , i , factors = 0;
	
	cout<<"Enter the number : ";
	cin>>number;
	
	for(i=1;i<number;++i)
	{
		if(number%i==0)
		{
			cout<<"Factors : "<<i<<endl;
			factors += i;
		}
	}
	
	if(factors == number)
	{
		cout<<"\n"<<number<<" is a Perfect number ";
	}
	else
	{
		cout<<"\n"<<number<<" is Not a Perfect number ";
	}
	
	
	return 0;
}
