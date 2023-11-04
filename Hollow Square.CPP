#include<stdio.h>
#include<conio.h>

void main()
{
  int n,out,in;
  printf("enter the value of n : ");
  scanf("%d",&n);
   for(out=1;out<=n;out++)
   {
     for(in=1;in<=n;in++)
     {
       if(out==1 || out==n || in==1 || in==n)
       {
	printf("*");
       }
       else
       {
	printf(" ");
       }
     }
     printf("\n");
   }
   getch();
}

