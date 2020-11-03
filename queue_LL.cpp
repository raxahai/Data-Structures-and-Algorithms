#include <bits/stdc++.h>
using namespace std;

struct NODE
{
    int data;
    struct NODE *next;
};


class queue_LL
{
private:
    NODE *front;
    NODE *rear;
public:
    queue_LL(){
        this->front = NULL;
        this->rear = NULL;
    };

    void Enqueue(int element){
        NODE *new_node = new NODE;
        if (new_node != NULL)
        {
            if (front == NULL)
            {
                new_node->data = element;
                front = rear = new_node;
                new_node->next = NULL;
                cout<<"Enqueue element "<<new_node->data<<endl;
            }
            else
            {
                new_node->data = element;
                rear->next = new_node;
                rear = new_node;
                new_node->next = NULL;
                cout<<"Enqueue element "<<new_node->data<<endl;
            }
        }
    }
    void Dequeue(){
        if (front == NULL)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else{
            NODE *ptr_front;
            int val = front->data;
            front = front->next;
            cout<<"Dequeue element "<<val<<endl;
        }
    }
    void show(){
        NODE *ptr = front;
        while (ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
        cout<<endl;
    }
};

int main()
{
    queue_LL q1;
    q1.Enqueue(1);
    q1.Dequeue();
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(4);
    q1.Enqueue(5);
    q1.Dequeue();
    q1.show();
}