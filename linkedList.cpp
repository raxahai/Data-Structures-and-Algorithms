#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class linkedList{
    public:
        Node *head;
        linkedList(int data){
            head = new Node;
            head->data = data;
            head->next = NULL;
        }
        void add_node(int data){
            Node *node = new Node;
            node->data = data;
            node->next = NULL;
            // cout<<(head->next!=NULL)<<endl;
            Node *last = head;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = node;
        }
        void traversal(){
            Node *ptr = head;
            while (ptr != NULL)
            {
                cout<<ptr->data<<" ";
                ptr = ptr->next;
            } 
            cout<<endl;
        }
        void insert_after(int data,int prev_element){
            Node *prev = head;
            Node *node = new Node;
            node->data = data;
            while (prev->data != prev_element)
            {   
                prev = prev->next;   
            }
            node->next = prev->next;
            prev->next = node;
        }
        void insert_beginning(int element){
            Node *node_begin = new Node;
            Node *ptr_begin = head;
            node_begin->data = element;
            node_begin->next = ptr_begin;
            head = node_begin;
        }
        void delete_after(int data,int prev_element){
            Node *previ = head;
            Node *current = head;
            // Node *node = new Node;
            // node->data = data;
            current = current->next;
            while (current->data != data)
            {   
                previ = current;
                current = current->next;   
            }
            // node->next = prev->next;
            // prev->next = node;
            previ->next = current->next;
            delete [] current;
        }
};

int main(){
    linkedList L1(5);
    L1.add_node(6);
    L1.add_node(7);
    L1.add_node(8);
    L1.add_node(9);
    L1.traversal();
    L1.insert_after(1,6);
    L1.traversal();
    L1.insert_after(2,6);
    L1.traversal();
    L1.delete_after(2,6);
    L1.traversal();
    L1.insert_beginning(1);
    L1.traversal();
    L1.delete_after(1,6);
    L1.traversal();
}