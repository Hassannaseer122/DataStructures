/*
								Deletion Operation & traversing in Array
		for complete lecture of Data Structures Subscribe channel software Engineering
							link: www.youtube.com/SoftwareEngineering
*/

#include<iostream>
using namespace std;
int main()
{
	//Varrialble initializations
	int myArray[4]; 
	int location = 0;
	
	//for loop for taking input into the array
	for(int i=0;i<=4;i++)
	{
		cout<<"Enter number in the location "<<i<<" of array";
		cin>>myArray[i];
	}
	
	//for loop to show the array data on screen.
	for(int i=0; i<=4; i++)
	{
		cout<<"Number on location "<<i<<" is "<<myArray[i]<<endl;
	}
	
	//enter the location to delete data from that specific location.
	cout<<"Enter location from where you want to delete the Data";
	cin>>location;
	
	//Listen explaination in video to understand how this loop is working.
	for(int i =location; i<=4; i++)
	{
		
		myArray[location] = myArray[location+1];
		location++;
	}
	
	for(int i=0; i<=4-1; i++)
	{
		cout<<"Number on location "<<i<<" is "<<myArray[i]<<endl;
	}
	
}
