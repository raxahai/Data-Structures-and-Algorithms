#include <iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
};

class Doubly_LL
{
private:
    Node *head;
    Node *last;
public:
    Doubly_LL(){
        this->head = NULL;
    };
    void insert_after(int data){
        Node *new_node = new Node;
        if (head == NULL)
        {
            head = new Node;
            head->prev = NULL;
            head->data = data;
            head->next = NULL;
            return;
        }
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        new_node->data = data;
        ptr->next = new_node;
        new_node->prev = ptr;
        new_node->next = NULL;
    };
    void traversal(){
        do
        {
            cout<<head->data<<" ";
            last = head;
            head = head->next;   
        } while (head != NULL);
        cout<<"\n";
    };
    void reverse_traversal(){
        while (last != NULL)
        {
            cout<<last->data<<" ";
            last = last->prev;
        }
        cout<<"\n";
    };
};

int main()
{
    Doubly_LL LL;
    LL.insert_after(1);
    LL.insert_after(2);
    LL.insert_after(3);
    LL.insert_after(4);
    LL.traversal();
    LL.reverse_traversal();
}   