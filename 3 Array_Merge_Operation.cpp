#include<iostream>
using namespace std;

int main()
 {
   	int a[4];  // array number one. . . 
	int b[4];  // array number two. . . 
	int c[8];  // array number three in which we merge above loops. . .
	int i; // for loop variable. . 
   	
   	cout<<"Enter Elements in 1st Array: ";
   	for(i=0;i<4;i++)
   	{
   		cin>>a[i];
   	}
   	
   	cout<<"Enter Elements in 2nd Array: ";
   	for(i=0;i<4;i++)
   	{
  		 cin>>b[i];
   	}
   	
   	cout<<"\nElements of Array After Merge: ";
   	
   	for(i=0;i<4;i++)
   	{
    	c[i]=a[i];     
    	c[i+4]=b[i];
  	 }
  	 
   	for(i=0;i<8;i++)
   	{
  	 cout<<c[i];
  	}

 }
