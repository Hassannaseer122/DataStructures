#include<iostream>
using namespace std;
class circularq
{
	private:
		int F, R;
		int CQ[10];
		
	public:
		circularq()
		{
			F=-1;
			R=-1;
		}
		void insert(int n)
		{
			if(F==0 && R==8)
			{
				cout<<"Circular Queue is full";
			}
			if(F==-1)
			{
				F=R=0;
			}
			else if(R==9)
			{
				R=0;
			}
			else
			{
				R++;
			}
			CQ[R]=n;
			if(F==-1)
			{
				F=0;
			}
		}
		
		int Del()
		{
			int data;
			if(F==-1)
			{
				cout<<"Circular Queue is empty";
				return NULL;
			}
			data = CQ[F];
			if(F==R)
			{
				F=R=-1;
			}
			else if(F==9)
			{
				F==0;
			}
			F++;
			return data;
		}
		
		void print()
		{
			if(F==-1)
			{
				cout<<"Queue is empty";
				return;
			}
			for(int i=F; i<=R; i++)
			{
				cout<<CQ[i]<<"\t";
			}
		}
};

int main()
{
	circularq obj;
	int opt, val;
	while(opt!=3)
	{
		cout<<"\n1: For insert item\n2: Delete item\n3: Exit\nEnter the choice:";
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"Enter value to insert";
				cin>>val;
				obj.insert(val);
				system("cls");
				cout<<"Queue after insertion\n";
				obj.print();
				break;
			case 2:
				cout<<"\n Value "<<obj.Del()<<" is deleted\n";
				system("cls");
				cout<<"Queue after deletion\n";
				obj.print();
		}
	}
}
