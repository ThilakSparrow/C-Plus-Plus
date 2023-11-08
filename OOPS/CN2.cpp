#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int img;
    void getval()
	{
        cout << "\nEnter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> img;
    }
    void display()
	{
        cout << real << " + " << img << "i" << endl;
    }
 
    void sum(Complex c1, Complex c2)
	{
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    void sub(Complex c1,Complex c2)
    {
    	real=c1.real-c2.real;
    	img =c1.img-c2.img;
	}
	void mul(Complex c1,Complex c2)
    {
    	real=c1.real*c2.real-c1.img*c2.img;
    	img=c1.real*c2.img+c1.img*c2.real;
	}
};
int main()
{
    
    int ch;
	Complex c1,c2,c3,c4,c5;
	cout<<"ENTER THE FIRST COMPLEX NUMBER"<<endl;
    c1.getval();
    cout << "\nTHE FIRST COMPLEX NUMBER : ";
    c1.display();
    cout<<"ENTER THE SECOND COMPLEX NUMBER"<<endl;
    c2.getval();
    cout << "\nTHE SECOND COMPLEX NUMBER : ";
    c2.display();
	cout<<"\n___MENU___";
	cout<<"\n1) ADD TWO COMPLEX NUMBERS";
	cout<<"\n2) SUBTRACT TWO COMPLEX NUMBERS";
	cout<<"\n3) MULTIPLY TWO COMPLEX NUMBERS";
	cout<<"\n4)EXIT THE PROGRAM";
	do{
		cout<<"\nENTER THE CHOICE";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n***ADDITION***";
				cout<<"\nTHE SUM OF TWO COMPLEX NUMBER IS"<<endl;
    			c3.sum(c1,c2);
    			c3.display();
    			break;
			case 2:
				 cout<<"\n***SUBTRACTION***";
				 cout<<"\nTHE DIFFERENCE OF TWO COMPLEX NUMBER IS"<<endl;
   				 c4.sub(c1,c2);
    			 c4.display();
    			 break;
    		case 3:
				 cout<<"\n***MULTIPLICATION***";
				 cout<<"\nTHE PRODUCT OF TWO COMPLEX NUMBER IS"<<endl;
				 c5.mul(c1,c2);
    			 c5.display();
    			 break;
			case 4:
				cout<<"\nPRESS ANY KEY TO EXIT THE PROGRAM :)";
				break;
			default :
				cout<<"\n INVALID CHOICE :(";
		}
    }while(ch!=4);
    return 0;
}    
    
   


