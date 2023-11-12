#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3];
    public:
 void get()
	{
        cout<<"\n Enter Matrix Element (3 X 3) : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
	}
	void display()
	{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
	}
	 Matrix operator +(Matrix m1)
		{
        	int mat[3][3];
        	for(int i=0; i<3; i++)
        	{
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]+m1.a[i][j];
                }
        	}
        	cout<<"\n Addition of Matrix : \n\n";
        	for(int i=0; i<3; i++)
        	{
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        	}
		}
		Matrix operator -(Matrix m1)
		{
        	int mat[3][3];
        	for(int i=0; i<3; i++)
        	{
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]-m1.a[i][j];
                }
        	}
        	cout<<"\n subtraction of Matrix : \n\n";
        	for(int i=0; i<3; i++)
        	{
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        	}
		}
		Matrix operator*(Matrix m1)
		{
  			 int mat[3][3];
  		     for (int i = 0; i < 3; i++)
			   {
			  for (int j = 0; j < 3; j++) 
			  {
  				for (int k = 0; k < 3; k++) {
                	mat[i][j] = a[i][k]* (m1.a[k][j]);
            }
        }
    }
    	cout<<"\n multiplication of Matrix : \n\n";
  
       for (int i = 0; i < 3; i++) 
	   {
         for (int j = 0; j <3; j++) 
		 {
  
          cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}
  
	
};
int main()
{
        Matrix m1,m2;
        m1.get();      
        m2.get();     
        cout<<"\n First Matrix : \n\n";
        m1.display();  
        cout<<"\n Second Matrix : \n\n";
        m2.display();
        m1+m2; 
		m1-m2;
		m1*m2;       
        return 0;
}
