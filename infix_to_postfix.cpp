#include <iostream>
using namespace std;

class stack
{
private:
    int top=-1;
    int size;
public:
    char *arr;
    stack(int size);
    char top_return();
    void show();
    void push(int element){
        if (!isFull())
        {
            top++;
            arr[top] = element;
        }
    }
    char pop(){
        if (!isEmpty())
        {
            return arr[top--];
        }
        return '0';
    }
    bool isFull(){
        if (top == size-1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

stack::stack(int size)
{
    this->size = size;
    arr = new char[size];
}

void stack::show(){
    int ptr = top;
    while (ptr>=0)
    {
        cout<<arr[ptr]<<" ";
        ptr -= 1;
    }
    cout<<endl;
}
char stack::top_return(){
    return arr[top];
}

bool isOperator(char a){
    if (a == '+' || a == '-' || a == '*' || a == '/')
    {
        return true;    
    }
    return false;
}

int preced(char a){
    if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    return 0;
}

int main()
{
    char *post_arr = new char[20];
    char s[10] = "x*y+z-k";
    stack s1(10);
    int i,j = 0;
    while(s[i] != '\0')
    {
        if (!isOperator(s[i]))
        {
            post_arr[j] = s[i];
            i++;
            j++;
        }
        else
        {
            if ((preced(s[i]) > preced(s1.top_return())))
            {
                s1.push(s[i]);
                i++;
            }
            else
            {
                post_arr[j] = s1.pop();
                j++;
            }
        }
    }
    while (!s1.isEmpty())
    {
        post_arr[j] = s1.pop();
        j++;
    }
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        cout<<post_arr[i]<<" "; 
    }
    
}