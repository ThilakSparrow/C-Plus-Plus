#include<iostream>
using namespace std;

int main(){
	
	int number , factors = 0, secondLastDigit , i;
	
	cout<<"Enter the number : ";
	cin>>number;
	
	secondLastDigit = ((number%100)/10);
	
	cout<<"secondLastDigit = "<<secondLastDigit<<endl;
	
	for(i=1;i<=secondLastDigit;i++)
	{
		if(secondLastDigit%i==0)
		{
			factors++;
		}
	}
	
	if(factors == 2)
	{
		cout<<secondLastDigit<<" is a Prime number "<<endl;
	}
	else
	{
		cout<<secondLastDigit<<" is Not a Prime number "<<endl;
	}
	
	return 0;
}
