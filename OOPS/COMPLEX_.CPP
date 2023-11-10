#include<iostream.h>
#include<conio.h>
class complex
{
	private:
	  int r,i;
	public:
	  void getval();
	  {
	    cout<<"\nENTER REAL & IMAGINARY PART : "<<endl;
	    cin>>"REAL : ">>r>>"IMAGINARY : ">>i;
	  }
	  void display();
	  {
	    cout<<r<<"+"<<m<<"i";
	  }
	  void add(int r,int i);
	  {

	  }
};
void main()
{
	clrscr();
	complex c1,c2,c3;
	c1.getval();
	c2.getval();
	c3=c1+c3;
	c3.display();
	getch();
}

