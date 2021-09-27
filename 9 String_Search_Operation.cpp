/*
The program will help you in searching the substring in the string.
For more detail understanding of the program
visit our YouTube Channel and watch the Data Structure series
at www.youtube.com/SoftwareEngineering
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string strOne;
    string strTwo;
    cout<<"Enter your first string\n";
    getline(cin,strOne);
    
    cout<<"Enter string you want to search";
    getline(cin,strTwo);
  
    cout << "The string is starting from location " << strOne.find(strTwo) << endl;
	
	
}
