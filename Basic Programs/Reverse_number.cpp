// Reversed Number 

#include<iostream>
using namespace std;

int main (){
	
	int number , remainder , reversednumber = 0;
	
	cout<<"Enter the number : ";
	cin>>number;
	
	while (number !=0)
	{
		reversednumber = (reversednumber * 10 ) + (number % 10);
		number /= 10;	
	}	
	
	cout<<"Reversed Number : "<<reversednumber;
}
