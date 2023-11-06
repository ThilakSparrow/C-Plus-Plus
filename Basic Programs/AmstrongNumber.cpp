//amstrong number
#include<iostream>
using namespace std;

int main()
{
	int number, remainder, sum, totalsum = 0 ;
	
	cout<<"Enter the Number : ";
	cin>>number;
	
	int temp = number;
	
	while(temp>0)
	{
			remainder = temp % 10;
			sum = remainder * remainder * remainder;
			totalsum += sum;
			temp /= 10;
	}
	cout<<totalsum;
	
	if(number == totalsum)
	{
		cout<<"\nIt is an Amstrong Number ";
	}
	else
	{
		cout<<"\nIt is Not an Amstrong Number ";
	}
	return 0;
}
