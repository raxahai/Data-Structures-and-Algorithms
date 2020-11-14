#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr,int n){
    int temp,element;
    for (int i = 1; i < n; i++)
    {
        element = arr[i];
        int j = i-1;
        while (element < arr[j] && j>=0)
        {
            cout<<"enter"<<endl;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = element;
    }
}

void printArray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // case-1 with no sorted array taking big-oh(n^2)
    // int arr[] = {5,4,3,2,1};

    // case-2 with sorted array taking Big-oh(n)
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"sorted array using insertion sort is:"<<endl;
    insertion_sort(arr,n);
    printArray(arr,n);
}