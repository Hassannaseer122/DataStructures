/*
Deletion Operation on String Data Structure
using C++
For more detail understanding of Data Structures please follow the playlist
of Data Structures on www.YouTube.com/SoftwareEngineering
*/

#include<iostream>
using namespace std;
int main()
{
	//declare 2 strings
	char a[100], st1[100];
	int i=0;
	int r=0;
	int initial_position;
	int final_position;
	int counter=0;
	
	cout<<"Enter a string\n";
	cin>>a;
	
	cout<<"Enter initial position";
	cin>>initial_position;
	
	cout<<"Enter final position";
	cin>>final_position;
	
	for(i=0; i<initial_position;i++)
	{
		st1[i]=a[i];
		counter++;
	}
	r = final_position+1;
	for(i =counter; a[i]!='\0'; i++,r++)
	{
		st1[i] = a[r];
	}
	cout<<st1;
}
