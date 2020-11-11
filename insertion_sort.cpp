#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr,int n){
    int temp;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    // case-1 with no sorted array
    // int arr[] = {5,4,3,2,1};

    // case-2 with sorted array taking Big-oh(n^2)
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"sorted array using insertion sort is:"<<endl;
    insertion_sort(arr,n);
    printArray(arr,n);
}