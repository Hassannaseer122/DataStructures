#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	node *p;
	int data;
	node*n;
};
class list
{
	private:
		node *start, *cur, *temp;
	public:
		list()
		{
			start = NULL;
		}
		
		add_item(int x)
		{
			if(start == NULL)
			{
				start = new node;
				start->p = NULL;
				start->data = x;
				start->n=NULL;
			}
			else
			{
				node *prev;
				cur=start;
				while(cur->n!=NULL)
				{
					cur = cur->n;
				}
				prev = temp;
				temp = new node;
				temp->p = prev;
				temp->data = x;
				temp->n = NULL;
				cur->n=temp;
			}
		} //Closing bracket of add-item.
		
		print()
		{
			cout<<"Data in link list\n";
			cur=start;
			while(cur->n!=NULL)
			{
				cout<<cur->data<<endl;
				cur= cur->n;
			}
			cout<<cur->data<<endl;
		}
};

int main()
{
	list obj;
	int val;
	cout<<"Enter five values\n";
	for(int i=1; i<=5;i++)
	{
		cin>>val;
		obj.add_item(val);
	}
	obj.print();
}
