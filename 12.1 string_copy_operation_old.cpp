#include <iostream>
using namespace std;
int main() {
   char str1[100] = "Doctor_of_Computers";
   char str2[100];
   int i;
   for(i = 0; str1[i] != '\0'; i++)
   	{
   		str2[i] = str1[i];
	}
   str2[i+1] = '\0';
   cout<<"The string is in str2 now -> "<<str2;
   return 0;
}
