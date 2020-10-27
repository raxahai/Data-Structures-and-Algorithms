#include <iostream>
using namespace std;

class Stack
{
private:
    int top = -1;
    int *arr;
    int size;
public:
    Stack(int size);
    void push(int element);
    int pop();
    int peek(int position);
    bool isEmpty();
    bool isFull();
};

Stack::Stack(int size)
{
    arr = new int[size];
    this->size = size;
}

void Stack::push(int element){
    if (!isFull())   
    {
        top = top + 1;
        arr[top] = element;
        return;
    }
    cout<<"Stack Overflow->"<<element<<" Not added"<<endl;
};

int Stack::pop(){
    if (!isEmpty())
    {
        return arr[top--];
    }
    cout<<"Stack Underflow"<<endl;
    return 0;
}

int Stack::peek(int position){
    return arr[top-position+1];
};

bool Stack::isEmpty(){
    if (top==-1)
    {
        return true;
    }
    return false;
    
};

bool Stack::isFull(){
    if (top==size-1)
    {
        return true;
    }
    return false;
}

int main()
{
    int size = 50;
    Stack s1(size);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.push(19);
    s1.push(29);
    s1.pop();
}