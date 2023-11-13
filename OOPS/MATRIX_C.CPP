#include<iostream.h>
#include<conio.h>
#include<math.h>
class matrix
{
public:
	int row,column,a[3][3];
	int i,j;

	matrix()
	 {
	  row=0;
	  column=0;
	 }
	matrix(int r,int c)
	{
	 row=r;
	 column=c;
	}
	matrix(const matrix &m1)
	{
	 row=m1.row;
	 column=m1.column;
	}
	void getval()
	{
	cout<<endl;
	 for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	    {
	    cin>>a[i][j];
	    }
	  }
	  cout<<endl;
	}
	void add(matrix m1,matrix m2)
	{
	matrix m3;
	 for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	    {
	     m3.a[i][j]=m1.a[i][j]+m2.a[i][j];
	    }
	 }
	}
	void sub(matrix m1,matrix m2)
	{
	matrix m3;
	 for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	    {
	     m3.a[i][j]=m1.a[i][j]+m2.a[i][j];
	    }
	  }
	}
	void display()
	{
	 for(i=0;i<3;i++)
	  {
	   for(j=0;j<3;j++)
	    {
	      cout<<" "<<a[i][j];
	    }
	  cout<<endl;
	}
     }
};
void main()
{
 matrix m1,m2,m3;
 clrscr();
 cout<<"\nENTER THE ELEMENTS OF FIRST MATRIX"<<endl;
 m1.getval();
 cout<<"\nENTER THE ELEMENTS OF SECOND MATRIX"<<endl;
 m2.getval();

 cout<<"ADDING TWO MATRICES"<<endl;
 m3.add(m1,m2);
 m3.display();

 getch();
}