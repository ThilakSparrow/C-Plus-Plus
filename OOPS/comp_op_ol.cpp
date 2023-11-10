#include<iostream>
using namespace std;

class complex
{
	int real,img;
	public:
		void get()
		{
			cin>>real;
			cin>>img;
		}
		
		complex operator+ (complex c1)
		{
			complex c3;
			c3.real=real+c1.real;
			c3.img=img+c1.img;
			return (c3);
		}
		
		complex operator- (complex c1)
		{
			complex c3;
			c3.real=real-c1.real;
			c3.img=img-c1.img;
			return (c3);
		}
		
		complex operator* (complex c1)
		{
			complex c3;
			c3.real=real*c1.real;
			c3.img=img*c1.img;
			return (c3);
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i";
		}
};
int main()
{
	int ch;
	complex c1,c2,c3;
	cout<<"ENTER THE FIRST COMPLEX NUMBER"<<endl;
    c1.get();
    cout << "\nTHE FIRST COMPLEX NUMBER : ";
    c1.display();
    cout<<"ENTER THE SECOND COMPLEX NUMBER"<<endl;
    c2.get();
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
    			c3=c1+c2;
    			c3.display();
    			break;
			case 2:
				 cout<<"\n***SUBTRACTION***";
				 cout<<"\nTHE DIFFERENCE OF TWO COMPLEX NUMBER IS"<<endl;
   				 c3=c1-c2;
    			 c3.display();
    			 break;
    		case 3:
				 cout<<"\n***MULTIPLICATION***";
				 cout<<"\nTHE PRODUCT OF TWO COMPLEX NUMBER IS"<<endl;
				 c3=c1*c2;
    			 c3.display();
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
