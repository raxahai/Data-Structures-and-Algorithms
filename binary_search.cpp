#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int element){
    int low,high,mid;
    low = 0;
    high = size - 1;
    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid] == element)        
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr_length,search;
    int arr[5] = {1,2,3,4,5};
    arr_length = sizeof(arr)/sizeof(int);
    search = binarySearch(arr,arr_length,3);
    cout<<search;
}