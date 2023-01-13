#include<iostream>
using namespace std;

class stack{
	private:
		int top;
		int arr[5];
		
	public:
		//constructor 
		stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		} 
		
		bool isempty()
		{
			if(top==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool isfull()
		{
			if(top==4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		void push(int val)
		{
			if(top==4)
			{
				cout<<"stack is full"<<endl;
			}
			else
			{
				top=top+1;
				arr[top]=val;
			}
		}
		
		int pop()
		{
			if(top==-1)
			{
				cout<<"stack is empty"<<endl;
//				return 0;
			}
			else
			{
				int popval = arr[top];
				arr[top]=0;
				top=top-1;
				return popval;
			}
		}
		
		void display()
		{
			cout<<"all values in the stack:"<<endl;
			for(int i=0;i<5;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};

int main()
{
	stack s;
	int choice,value;
	
	do
	{
		cout<<"Enter the number to perform below operation : \n";
		cout<<"1. push \n";
		cout<<"2. pop \n";
		cout<<"3. isempty \n";
		cout<<"4. isfull \n";
		cout<<"5. display \n";
		
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter value for push : \n";
				cin>>value;
				s.push(value);
				break;
				
			case 2:
				s.pop();
				break;
				
			case 3:
				if(s.isempty())
				{
					cout<<"stack is empty "<<endl;
				}
				else
				cout<<"stack is not emoty "<<endl;
				break;
				
			case 4:
				if(s.isfull())
				{
					cout<<"stack is full "<<endl;
				}
				else
				cout<<"stack is not full "<<endl;
				break;
				
			case 5:
				s.display();
				break;
		}
		
	}while(choice != 0);
}
