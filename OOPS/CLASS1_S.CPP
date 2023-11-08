#include<iostream.h>
#include<conio.h>
class student
{
   private:          /*private it is a access specifier can accessed only by this specified class*/
	int reg_no;
	char name[20],dept[30];
	int age;
    public: /*this access specifier can access by any kind of classes*/
	void getval()
	{
	  cout<<"\nENTER THE REGISTER NUMBER : ";
	  cin>>reg_no;
	  cout<<"ENTER THE NAME : ";
	  cin>>name;
	  cout<<"ENTER THE DEPARTMENT : ";
	  cin>>dept;
	  cout<<"ENTER THE AGE : ";
	  cin>>age;
	}
	void display()
	{
	  cout<<"\nSTUDENT NAME : "<<name;
	  cout<<"\nSTUDENT REGISTER NO : "<<reg_no;
	  cout<<"\nSTUDENT DEPARTMENT : "<<dept;
	  cout<<"\nSTUDENT AGE : "<<age;
	}
};
void main()
{
	clrscr();
	student s1,s2;
	cout<<"\n____STUDENT DETAILS____";
	s1.getval();
	cout<<"\n";
	s1.display();
	cout<<"\n";
	s2.getval();
	cout<<"\n";
	s2.display();
    getch();
}
