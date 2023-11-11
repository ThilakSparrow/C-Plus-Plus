#include<iostream>
using namespace std;

class employee
{
	string fn;
	string ln;
	double sal;
public:
	employee()
	{
	}
	employee(double s)
	{
		sal=s;
	}
	void getval()
	{
	  cout<<"\nENTER THE FIRST NAME: ";
	  cin>>fn;
	  cout<<"ENTER THE LAST NAME: ";
	  cin>>ln;
	  cout<<"MONTHLY SALARY : ";
	  cin>>sal;
	  sal=sal*12;
	  cout<<"THEREFORE, YEARLY SALARY : "<<sal;
	  cout<<"\n";
	}
	void display()
	{
		cout<<"\nEMPLOYEE NAME : "<<fn<<ln;
		cout<<"\nYEARLY SALARY : "<<sal;
	}
	void raise_salary()
	{
		cout<<"\n\n***SALARY INCREMENT***"<<endl;
		sal=sal+(0.10*sal);
		cout<<"THE RAISED SALARY : "<<sal;
	}
};
int main()
{
	employee e1,e2;
	
	cout<<"\n***ENTER EMPLOYEE DETAILS***"<<endl;
	e1.getval();
	e2.getval();
	
	cout<<"\n\n***EMPLOYEE_1 DETAILS***"<<endl;
	e1.display();
	cout<<"\n***EMPLOYEE_2 DETAILS***"<<endl;
	e2.display();
	
	e1.raise_salary();
	e2.raise_salary();
	
	cout<<"\n\n***UPDATED EMPLOYEE DETAILS***"<<endl;
	e1.display();
	e2.display();
	return 0;
}
