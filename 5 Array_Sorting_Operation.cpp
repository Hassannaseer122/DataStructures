#include <iostream>
using namespace std;
 
int main()
{
    int arr[4];
    int size, i, j, temp;

    //Reading elements of array
    cout<<"Enter elements in array: ";
    for(i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    //Sorting an array in ascending order
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            //Using the Swap method. . . 
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing the sorted array. . .
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<4; i++)
    {
        cout<<arr[i]<<endl;
    }
 
}
