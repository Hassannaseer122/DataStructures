/*						Code for the Search operation on array
						For Detail Lectures Please Vsit & Subscribe
					channel : https://www.youtube.com/SoftwareEngineering
*/

#include<iostream>
using namespace std;
int main()
{
	int myArray[4]; 
	int Data_to_Search;
	
	for(int i =0;i<=4;i++)
	{
		cout<<"Enter the data for location "<<i;
		cin>>myArray[i];
	}
	
	cout<<"Enter the number which you want to search in array ";
	cin>>Data_to_Search;
	
	for(int i =0;i<=4;i++)
	{
		if(myArray[i]==Data_to_Search)
		{
			cout<<"Data "<<Data_to_Search<<" is at location "<<i;
		}
	}
}
