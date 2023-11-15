#include<iostream>
using namespace std;
void bill(int);
struct eb
{
	int a;
	char name[25];
	float rate;
}e[10];
int main()
{
	int i,n;
	cout<<"ENTER THE NO. OF USERS:";
	cin>>n;
	cout<<"ENTER THE NAME OF EACH USERS AND NO OF UNITS CONSUMED:";
	for(i=0;i<n;i++)
		cin>>e[i].name>>e[i].a;
	bill(n);
	return 0;
}
void bill(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(e[i].a>=1 && e[i].a<=100)
			e[i].rate=e[i].a*1.5;
		else if(e[i].a>=101 && e[i].a<=200)
			e[i].rate=e[i].a*1.8;
		else if(e[i].a>=201 && e[i].a<=300)
			e[i].rate=e[i].a*2.5;
		else if(e[i].a>300)
			e[i].rate=(e[i].a*2.5)+((e[i].a*2.5)*(15/100));
		else
			e[i].rate=50;
	}
	cout<<"USERS \t UNITS \t AMOUNT\n";
	for(i=0;i<n;i++)
		cout<<e[i].name<<'\t'<<e[i].a<<'\t'<<e[i].rate<<endl;
}
