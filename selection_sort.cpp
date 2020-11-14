#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *A,int size){
    int min_ind,temp;
    for (int i = 0; i < size; i++)
    {
        min_ind = i;
        for (int j = i+1; j < size; j++)
        {
            if (A[j]<A[min_ind])
            {
                min_ind = j;
            }
        }
        temp = A[i];
        A[i] = A[min_ind];
        A[min_ind] = temp;
    }
}

void printArray(int *A,int size){
    for (int i = 0; i <= size-1; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // int arr[] = {5,4,3,2,1};
    int arr[] = {1,2,3,4,5}; 
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    printArray(arr,n);
}