#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;
public:
    LinkedList(int data){
        this->head = new Node;
        head->data = data;
        head->next = head;
    };
    void insert_last(int data){

        Node *last = head;
        while(last->next != head){
            last = last->next;
        }
        Node *new_node = new Node;
        new_node->data = data;
        last->next = new_node;
        new_node->next = head;
    };
    void traversal(){
        Node *ptr = head;
        do
        {
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        } while (ptr != head);
        cout<<"\n";
    }
};


int main(){
    LinkedList LL(1);
    LL.insert_last(2);
    LL.insert_last(3);
    LL.insert_last(4);
    LL.traversal();
    LL.insert_last(5);
    LL.traversal();
}