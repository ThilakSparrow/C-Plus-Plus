//sum of odd and even digits	

#include<iostream>
using namespace std;

int main()
{
	int number, remainder, oddsum = 0, evensum=0;
	
	cout<<"Enter the Number : ";
	cin>>number;
	
	while(number != 0)
	{
		remainder = number % 10;
		if (remainder % 2 != 0)
		{
			oddsum = oddsum + remainder;
		}
		else 
		{
			evensum = evensum + remainder;	
		}	
		number = number / 10;
	}
	 	
	cout<<"Sum of Odd digits : "<<oddsum<<endl;
	cout<<"Sum of Even digits : "<<evensum<<endl;
	return 0;
}
