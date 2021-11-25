#include<iostream>
using namespace std;
int main()
{
	int a = 10; 
	int *myPtr;
	myPtr = &a;
	
	cout<<"Value of a is "<<a<<endl;
	cout<<"Address of variable is "<<myPtr<<endl;
	
	cout<<"Value on the address is "<<*myPtr<<endl;
}
