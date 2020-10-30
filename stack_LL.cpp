#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class stack_LL
{
private:
    Node *top;
public:
    stack_LL(){
        this->top = NULL;
    }
    void push(int element){
        Node *new_node = new Node;
        if (new_node != NULL)
        {
            if (top == 0)
            {
                top = new Node;
                top->data = element;
                top->next = NULL;
            }
            new_node->data = element;
            new_node->next = top;
            top = new_node;
        }
    };
    int pop(){
        if (!isEmpty())
        {
            top = top->next;
            return 1;
        }
        return 0;
        
    }
    bool isEmpty(){
        if (top==NULL)
        {
            cout<<"stack Underflow"<<endl;
            return true;
        }
        return false;
    }
    void show(){
        Node *ptr = top;
        if (ptr == NULL)
        {
            cout<<"Stack Empty";
            return;
        }
        
        while (ptr->next != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main()
{
    stack_LL s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.show();
    s1.pop();
    s1.pop();
    s1.show();
}