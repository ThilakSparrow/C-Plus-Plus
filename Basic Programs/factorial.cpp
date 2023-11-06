//factorial
#include<iostream>
using namespace std;

int main ()
{
	int number, factorial=1;
	
	cout<<"Enter the number : ";
	cin>>number;
	
	for(int i = number; i >= 1 ; i--)
	{
		factorial *= i;
	}
	
	cout<<"Factorial : "<<factorial;
	return 0;
}
