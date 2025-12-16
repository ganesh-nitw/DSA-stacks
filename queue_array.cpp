// Queue implementation using array
// Language: c++
// Method: Arrary + Function(linear queue)
#include<iostream>
using namespace std;
int q[20];
int front=-1;
int rear=-1;
int n=20;
void enqueue(int value)
{
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		q[front]=value;
	}
	else if(rear==n-1)
	{
		cout<<"queue overflow \n";
	}
	else
	{
		rear++;
		q[rear]=value;
	}
}
void dequeue()
{
	if(front==-1||front>rear)
	{
		cout<<"queue underflow \n";
	}
	else
	{
		front++;
	}
}
void Display()
{
	for(int i=rear;i>=front;i--)
	{
		cout<<q[i]<<endl;
	}
}
int main()
{
	enqueue(23);
	enqueue(28);
	enqueue(30);
	dequeue();
	dequeue();
	Display();
}
