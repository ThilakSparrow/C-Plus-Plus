/*Problem :- Write A C++ Program To Find Denomination Needed for A Given Amount Along With The Total Number of Notes .
https://www.programmingwithbasics.com/2015/10/write-program-to-find-denomination.html*/

#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int amt,r2000=0,r500=0,r200=0,r100=0,r50=0,r20=0,r10=0,r5=0,r2=0,r1=0,coins=0,count=0;
	
	cout<<"Enter the Amount in integer :  "; 
	cin>>amt;
	
	while (amt>=2000)
	{
		r2000 = amt/2000;
		amt = amt%2000;
		cout<<"\nRs.2000 = "<<r2000;
		break;
	}
	while (amt>=500)
	{
		r500 = amt/500;
		amt = amt%500;
		cout<<"\nRs.500 = "<<r500;
		break;
	}
	while (amt>=200)
	{
		r200 = amt/200;
		amt = amt%200;
		cout<<"\nRs.200 = "<<r200;
		break;
	}
	while (amt>=100)
	{
		r100 = amt/100;
		amt = amt%100;
		cout<<"\nRs.100 = "<<r100;
		break;
	}
	while (amt>=50)
	{
		r50 = amt/50;
		amt = amt%50;
		cout<<"\nRs.50 = "<<r50;
		break;
	}
	while (amt>=20)
	{
		r20 = amt/20;
		amt = amt%20;
		cout<<"\nRs.20 = "<<r20;
		break;
	}
	while (amt>=10)
	{
		r10 = amt/10;
		amt = amt%10;
		cout<<"\nRs.10 = "<<r10;
		break;
	}
	while (amt>=5)
	{
		r5 = amt/5;
		amt = amt%5;
		cout<<"\nRs.5 = "<<r5;
		break;
	}
	while (amt>=2)
	{
		r2 = amt/2;
		amt = amt%2;
		cout<<"\nRs.2 = "<<r2;
		break;
	}
	while (amt>=1)
	{
		r1 = amt/1;
		amt = amt%1;
		cout<<"\nRs.1 = "<<r1;
		break;
	}
	count=r2000+r500+r200+r100+r50+r20+r10;
	coins=r5+r2+r1;                      					//seperating coins...
	cout<<"\ntotal no. of notes : "<<count;
	cout<<"\ntotal no. of coins : "<<coins;
	return 0;
}
