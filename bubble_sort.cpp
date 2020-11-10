#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
    int swap;
    for (int i = 0; i < n-1; i++)
    {
        swap = 0;
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;   
            }
        }       
        if (!swap)
        {
            break;
        }
    }
}

int main()
{
    // case:01 for not sorted
    int arr[5] = {2,7,11,9,4};
    
    // case:02 for sorted
    // int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    cout<<"sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}