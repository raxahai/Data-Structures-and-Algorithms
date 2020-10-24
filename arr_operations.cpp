#include <iostream>
using namespace std;

void traversal(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void insertion_case_1(int arr[],int index,int number,int size){
    for (int i = size; i >= index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = number;
}

void deletion_case_1(int arr[],int index,int number,int size){
    arr[index] = 0;
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
}

void linear_search(int arr[],int element,int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout<<"element found at index "<<i;
        } 
    }
}

int main(){
    int arr[6] = {1,2,3,4,5};
    int arr_length = sizeof(arr)/sizeof(arr[0]);
    traversal(arr,arr_length);
    insertion_case_1(arr,0,7,arr_length);
    traversal(arr,arr_length);
    deletion_case_1(arr,0,7,arr_length);
    traversal(arr,arr_length);
    linear_search(arr,5,arr_length);
}