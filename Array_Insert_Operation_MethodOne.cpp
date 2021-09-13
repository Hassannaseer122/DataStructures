/*						Code for the Insertion Operation on array
						For Detail Lectures Please Vsit & Subscribe
					channel : https://www.youtube.com/SoftwareEngineering
*/

#include<iostream>
using namespace std;
int main()
{
	int A[3];
	A[0] = 5;
	A[1] = 55;
	A[2] = 56;
	A[3] = 58;
	cout<<A[0];
	
	//Method two using For Loop and taking user input
	int B[3];
	for(int i=0; i<=3; i++)
	{
		cout<<"Enter Element for the index of "<<i<<" of Array ";
		cin>>B[i];
	}
	cout<<B[2];
}

