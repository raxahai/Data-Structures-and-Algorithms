#include <bits/stdc++.h>
using namespace std;

class circular_queue
{
private:
    int size;
    int front,rear;
    int *arr;
public:
    circular_queue(int size){
        this->front = 0;
        this->rear = 0;
        this->arr = new int[size];
        this->size = size;
    };
    void Enqueue(int element){
        if (!isFull())
        {
            rear = (rear+1)%size;
            arr[rear] = element;
            cout<<"enqueue element "<<element<<endl;
        }
        else{
            cout<<"Queue overflow ";
            cout<<"can't add "<<element<<endl;
        }
    }
    void Dequeue(){
        if (!isEmpty())
        {
            front = (front+1)%size;
            cout<<"Dequeue element "<<arr[front]<<endl;
            arr[front] = 0;
        }
        else{
            cout<<"Queue Underflow"<<endl;
        }
    };
    bool isEmpty(){
        if (front == rear)
        {
            return true;
        }
        return false;
    }
    bool isFull(){
        if (((rear+1)%size) == front)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    circular_queue q1(5);
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(4);
    q1.Enqueue(5);
    q1.Dequeue();
    q1.Enqueue(5);
    q1.Dequeue();
}