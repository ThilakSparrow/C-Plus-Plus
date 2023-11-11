#include<iostream>
using namespace std;

class complex
{
    int real,img;
 
 public: 

	void get()
    {
        cout<<"\n REAL = ";
        cin>>real;
        cout<<"\n IMAGINARY = ";
        cin>>img;
    }
    
    friend complex add(complex c1, complex c2);
    friend complex sub(complex c1, complex c2);
    friend complex mul(complex c1, complex c2);
};
    
    complex add(complex c1, complex c2)
    {
        complex c3;
        c3.real=c1.real+c2.real;
        c3.img=c1.img+c2.img;
        cout<<"\n THE SUM OF TWO COMPLEX NUMBER = "<<" "<<c3.real<<"+"<<c3.img<<"i";
    }
     complex sub(complex c1, complex c2)
    {
        complex c3;
        c3.real=c1.real-c2.real;
        c3.img=c1.img-c2.img;
        cout<<"\n THE DIFFERENCE OF TWO COMPLEX NUMBER = "<<" "<<c3.real<<"+"<<c3.img<<"i";
    }
     complex mul(complex c1, complex c2)
    {
        complex c3;
        c3.real=c1.real*c2.real + c1.img+c2.img;
        c3.img= c1.real*c2.img - c1.img*c2.real;
        cout<<"\n THE PRODUCT OF TWO COMPLEX NUMBER = "<<" "<<c3.real<<"+"<<c3.img<<"i";
    }
int main()
{
    complex c1,c2,c3;
    int ch;
    cout<<"\n FIRST COMPLEX NUMBER ";
    c1.get();
    cout<<"\n SECOND COMPLEX NUMBER ";
    c2.get();
    cout<<"\n ***MENU***";
    cout<<"\n 1) ADD 2 COMPLEX NUMBERS";
    cout<<"\n 2) SUBTRACT 2 COMPLEX NUMBERS";
    cout<<"\n 3) MULTIPLY 2 COMPLEX NUMBERS";
    cout<<"\n 4) EXIT THE PROGRAM";
    do
    {
    cout<<"\n ENTER YOUR CHOICE : ";
    cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\n____ADDITION____";
                c3=add(c1,c2);
                break;
            case 2:
                cout<<"\n____SUBTRACTION____";
                c3=sub(c1,c2);
                break;
            case 3:
                cout<<"\n____MUTIPLICATION____";
                c3=mul(c1,c2);
                break;
            case 4:
                cout<<"\nENTER ANY KEY TO EXIT : ) ";
                break;
            default:
                cout<<"\n INVALID CHOICE : (";
            
        }
    } while (ch!=4);
    return 0;
}
