#include <iostream>
using namespace std;

class Stack
{
private:
    int top = -1;
    char *arr;
    int size;
public:
    Stack(int size);
    void push(int element);
    char pop();
    int peek(int position);
    bool isEmpty();
    bool isFull();
    char stackTop();
};

Stack::Stack(int size)
{
    arr = new char[size];
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

char Stack::pop(){
    if (!isEmpty())
    {
        return arr[top--];
    }
    cout<<"Stack Underflow"<<endl;
    return '0';
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
char Stack::stackTop(){
    if (top != -1)
    {
        return arr[top];
    }
    return -1;
};

bool match(char a,char b)
{
    if (a == '(' && b == ')')
    {
        return true; 
    }
    if (a == '[' && b ==']')
    {
        return true;
    }
    if (a == '{' && b =='}')
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "}{(3+2)*(5+5}";
    Stack s1(s.length());
    char pop;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            s1.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            pop = s1.pop();
            if (!match(pop,s[i]))
            {
                cout<<"Unbalanced expression";
                return 0;
            }
            
        }
    }
    if ((!s1.isEmpty()) || pop == '0')
    {
        cout<<"Unbalanced expression";
        return 0;
    }
    cout<<"balanced expression";
    return 1;
}