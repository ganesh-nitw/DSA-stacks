// Circular Queue implementation using array
// Language: C++
// Method: Array + Functions

#include<iostream>
using namespace std;

int q[5];
int n = 5;
int f = -1;
int r = -1;

void enqueue(int value)
{
    if((r + 1) % n == f)
    {
        cout << "Queue Overflow\n";
    }
    else if(f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        q[r] = value;
    }
    else
    {
        r = (r + 1) % n;
        q[r] = value;
    }
}

void dequeue()
{
    if(f == -1 && r == -1)
    {
        cout << "Queue Underflow\n";
    }
    else if(f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f = (f + 1) % n;
    }
}

void Display()
{
    if(f == -1)
    {
        cout << "Queue is empty\n";
        return;
    }

    for(int i = f; i != (r + 1) % n; i = (i + 1) % n)
    {
        cout << q[i] << " ";
    }
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
