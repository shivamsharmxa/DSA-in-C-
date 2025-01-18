#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Stack
{
private:
    int arr[5];
    int top;

public:
    Stack()
    { // Constructor to initialize stack
        top = -1;
    }

    void push(int value)
    {

        if (top == 4)
        {
            cout << " The array is full/Stack Overflow \n"
                 << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "The Stack is empty / Stack Underflow\n"
                 << endl;
        }
        top--;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "The stack is empty / Stack Overflow\n"
                 << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << "";
        }
        cout << endl;
    }
};

int main()
{
    Stack s;

    s.push(20);
    s.push(19);
    s.push(78);

    s.display();

    s.pop();

    cout << "The top element of the stack is " << s.peek() << endl;
    return 0;
}