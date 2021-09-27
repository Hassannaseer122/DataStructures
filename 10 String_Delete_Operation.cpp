/*
The program will help you in deleting the substring in the string.
For more detail understanding of the program
visit our YouTube Channel and watch the Data Structure series
at www.youtube.com/SoftwareEngineering
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string myStr = "This is a Data Structure using C++ with Software Engineering Channel";
	cout<<"Before Deletion-> "+myStr+"\n";
	myStr.erase(1,8);
	cout<<"After Deletion -> "+myStr;
}
