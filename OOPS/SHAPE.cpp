#include<iostream>
using namespace std;

class measure
{
        public:
          

measure shape(int r)
{
        cout<<"area of the circle is "<<3.14*r*r;
}
measure shape(int l,int b)
{
        cout<<"area of the rectangle is"<<l*b;
}
measure shape(float t,int d,int e)
{
        cout<<"area of the triangle is"<<t*d*e;
}
measure shape(long a)
{
        cout<<"area of the square is"<<a*a;
}
measure shape(float c, long int g)
{
        cout<<"Volume of the cone is "<<(1/3)*3.14*c*c*g;
}
measure shape(double j)
{
        cout<<"Volume of the sphere is "<<(4/3)*3.14*j*j*j;
}
measure shape(float h, double f)
{
        cout<<"\nVolume of the Cylinder is "<<3.14*f*f*h;
}
};
int main()
{
        int r,d,e,l,b;
        long a;
        int ch;
        measure m1;
        cout<<"\t____CALCULATION OF AREA AND VOLUME____";
        cout<<"\n\n1) AREA OF CIRCLE";
        cout<<"\n2) AREA OF RECTANGLE";
        cout<<"\n3) AREA OF TRIANGLE";
        cout<<"\n4) AREA OF SQUARE";
        cout<<"\n5) EXIT THE PROGRAM";       
        do{
		cout<<"\n\tENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                        cout<<"ENTER RADIUS OF CIRCLE \n";
                        cout<<"\n RADIUS = ";
						cin>>r;
                        m1.shape(r);
                        break;
                case 2:
                        cout<<"ENTER SIDES OF RECTANGLE \n";
                        cout<<"\n LENGTH = ";
						cin>>l;
						cout<<"\n BREADTH = ";
						cin>>b;
                        m1.shape(l,b);
                        break;
                case 3:
                        cout<<"ENTER SIDES OF TRIANGLE \n";
                        cout<<"\n LENGTH = ";
						cin>>d;
    					cout<<"\n HEIGHT = ";
						cin>>e;
                        m1.shape(0.5,d,e);
                        break;
                case 4:
                        cout<<"ENTER THE SIDES OF SQUARE";
                        cout<<"\n SIDE = ";
						cin>>a;
                        m1.shape(a);
                        break;
                case 5:
						cout<<"ENTER ANY KEY TO EXIT:)";
                default:
                        cout<<"\nINVALID CHOICE :(";
        }
    }while(ch!=5);
        return 0;
}
