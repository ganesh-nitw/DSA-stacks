// Circular Queue implementation using array
// Language: C++
// Method: Array + Functions

#include<iostream>
using namespace std;

int q[5];
int n = 5;
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if((rear + 1) % n == front)
    {
        cout << "Queue Overflow\n";
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        q[rear] = value;
    }
    else
    {
        rear = (rear + 1) % n;
        q[rear] = value;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        cout << "Queue Underflow\n";
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

void Display()
{
    if(front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    int i=front;
    while(i!=rear)
    { 
      cout<<q[i]<<endl;
      i=(i+1)%n; 
    } 
    cout<<q[rear]<<endl;
}

int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30);

    dequeue();
    dequeue();
    dequeue();
    dequeue();

    enqueue(35);
    enqueue(40);

    Display();
}
