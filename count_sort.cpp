#include <bits/stdc++.h>
using namespace std;

void display(int *C,int len){
    for (int i = 0; i < len; i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
}

int max_number(int *A,int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i]>max)
        {
            max = A[i];
        }
    }
    return max;
}

void count_sort(int *A,int n){
    int max = max_number(A,n);
    int *count = new int[max+1];
    for (int i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        count[A[i]] += 1;
    }
    int k,l;
    k = l = 0;
    while (k<max+1)
    {
        if (count[k] != 0)
        {
            A[l] = k;
            count[k] -= 1;
            l++;
        }
        else{
            k++;
        }
    }
}
int main()
{
    int x[] = {7,1,5,8,6,3};
    int size = 6;
    display(x,size);
    count_sort(x,size);
    display(x,size);
}