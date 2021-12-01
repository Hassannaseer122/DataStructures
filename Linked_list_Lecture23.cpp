#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *link;
};

class LinkedList
{
	private:
		Node *start, *cur, *temp;
	public:
		//This is the Constructor
		LinkedList()
		{
			start = NULL;
		}		
		//Method to add the data into the list. . . 
		add(int NewNumber)
		{
			if(start == NULL)
			{
				start = new Node; 
				start->data = NewNumber;
				start->link = NULL;
			}
			else
			{
				cur=start;
				
				while(cur->link!=NULL)
				{
					cur=cur->link;
				}
				
				//Creating a new node and adding data into it.
				temp = new Node;
				temp->data = NewNumber;
				temp->link = NULL;
				cur->link = temp;
			}
		}
		
		//Method to print the data of nodes. . 
		Print_LinkedList_Data()
		{
			cout<<"Data in linked list"<<endl;
			cur=start;
			while(cur->link!=NULL)
			{
				cout<<cur->data<<endl;
				cur = cur->link;
			}
			cout<<cur->data<<endl;
		}
};

int main()
{
	LinkedList obj;
	int val,p;

	cout<<"Enter Six Values for LinkedList"<<endl;
	for(int i = 1; i<=6; i++)
	{
		cin>>val;
		obj.add(val);
	}
	obj.Print_LinkedList_Data();
}
