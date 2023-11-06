//palindrome number

#include<iostream>
using namespace std;

int main (){
	
	int originalnumber , temp, remainder , reversednumber = 0;
	
	cout<<"Enter the number : ";
	cin>>originalnumber;
	
	temp = originalnumber;
	
	while (temp !=0)
	{
		reversednumber = (reversednumber * 10 ) + (temp % 10);
		temp /= 10;	
	}	
	
	
	if (originalnumber == reversednumber)
	{
		cout<<" It is a Palindrome Number";
	}
	else
	{
		cout<<"Not a Palindrome Number";
	}
}
