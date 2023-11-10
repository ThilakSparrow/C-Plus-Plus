#include<iostream>
using namespace std;
class Complex
{
	int real,imag;
public:
   Complex()                         //Default Constructor.
   {

   }
   Complex(int r,int i)       // Parameterised constructor for different values.
   {
   real=r;
   imag=i;
   }
   Complex(Complex &c)       //Copy Constructor.
   {
    real=c.real;
    imag=c.imag;
   }
   void display()
   {
   cout<<"\n\t"<<real<<"+"<<imag<<"i.";
   }
};
int main()
{
 Complex c1,c2(5,3),c3(c2),c4(c1);
 cout<<"\ndefault constructor"<<endl;    
 c1.display();
 cout<<"\nparameterized constructor"<<endl;					// Invoking default constructor.
 c2.display();
 cout<<"\ncopy constructor"<<endl; 					// Invoking parameterzid constructor.
 c3.display();  		 // Invoking copy constructor. 
 c4.display();       
 return 0;
 }

