#include <iostream>

using namespace std;

class Array{
    public:
        int tSize;
        int uSize;
        int * ptr;
        Array(int tSize,int uSize){
            this->tSize = tSize;
            this->uSize = uSize;
            this->ptr = new int[tSize];
        }
        int& operator[](int value){
            // for (int i = 0; i < this->uSize; i++)
            // {
            //     cout<<ptr[i]<<" ";
            // }
            return ptr[value];
        }
        void set(){
            int num;
            for (int i = 0; i < this->uSize; i++)
            {
                cout<<"enter the element at "<<i<<": ";
                cin>>num;
                ptr[i] = num;
            }
            
        }
};

int main(){
    cout<<"creating our own ADT"<<endl;
    Array arr = Array(10,3);
    arr.set();
    cout<<arr[0];
    return 0;
}