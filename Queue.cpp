#include <iostream>
using namespace std;


// used the front and back technique to get constant time complexity
class Queue
{
private:
    int front,back;
    int *arr;
public:
    Queue(){
        this->arr = new int[10];
        this->front = -1;
        this->back = -1;
    };
    void Enqueue(int element){
        back++;
        arr[back] = element;
    }
    int dequeue(){
        if (front != back)
        {
            front++;
            int elem = arr[front];
            arr[front] = 0;
            return elem;
        }
        this->front = -1;
        this->back = -1;
        cout<<"queue empty"<<endl;
        return 1;
    }
    void show(){
        int ptr = front+1;
        while(ptr <= back){
            cout<<arr[ptr]<<" ";
            ptr += 1;
        }
        cout<<endl;
    }
};

int main()
{
    Queue q1;
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.show();
    q1.dequeue();
    q1.show();
    q1.dequeue();
    q1.show();
    q1.dequeue();
    q1.dequeue();
}