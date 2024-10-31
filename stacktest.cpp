
#include<iostream>
using namespace std;
int stack[5];
int top = -1;

bool isFull()
{ 
	return top>= 4;
}
bool isEmpty()
{ 
	return top == -1;
}
bool push(int value)
{
	if (isFull())
	{
	cout <<"stack is full" <<value <<endl;
	
	}
	stack[++top] = value;
	cout <<"pushed " <<value <<" to stack" <<endl;

}
bool pop(int poppedvalue)
{
	if (isEmpty())
	{
		cout <<"the stack is empty...cannot pop" <<endl;
	
	}
	else
	{
		   poppedvalue = stack[--top];
		   poppedvalue=stack[++top];
   cout <<"the top value is " <<poppedvalue<<endl;
   return poppedvalue;
  
	}

}
void display()
{
	if(isEmpty())
	{
		cout<<"stack is empty" <<endl;
		return;
	}
	cout<<"stack content: ";
	for (int i= 0; i<= top; i++)
	{
		cout<<stack[i] <<" ";
	}
	cout << endl;
}

int main()
{   push(10);
	push(20);
	push(30);
	push(40);
	display();
	pop(top);
	
	if(isEmpty())
	{
		cout <<"there is no peek value" <<endl;
	}
	else
	{
			cout<<"the peek value is " <<stack[top] <<endl;
	}


	
	return 0;
}


