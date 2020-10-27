#include <iostream>
using namespace std;

class Stack
{
private:
    int top = -1;
    int *arr;
public:
    Stack(int size);
    void push(int element);
    int pop();
    int peek(int position);
};

Stack::Stack(int size)
{
    arr = new int[size];
}

void Stack::push(int element){
    top = top + 1;
    arr[top] = element;
};

int Stack::pop(){
    return arr[top--];
}

int Stack::peek(int position){
    return arr[top-position+1];
};

int main()
{
    int size = 80;
    Stack s1(size);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);

    s1.pop();
    s1.pop();
    for (int i = 1; i < 4; i++)
    {
        cout<<s1.peek(i)<<endl;
    }
}