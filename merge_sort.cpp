#include <bits/stdc++.h>
using namespace std;

void merge(int *A,int mid,int low,int high){
    int i,j,k;
    i = low;
    j = mid + 1;
    int B[100];
    k = low;
    while (i<=mid && j<=high)
    {
        if(A[i]<A[j]){
            B[k] = A[i];
            i++,k++;
        }
        else{
            B[k] = A[j];
            k++,j++;
        }
    }
    while (i<=mid)
    {
        B[k] = A[i];
        k++,i++;
    }
    while (j<=high)
    {
        B[k] = A[j];
        k++,j++;
    }
    for (int i = 0; i < high+1; i++)
    {
        A[i] = B[i];
    }
}
void display(int *C,int len){
    for (int i = 0; i < len; i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
}

void mergesort(int *A,int low,int high){
    if (low<high)
    {
        int mid;
        mid= (low+high)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,mid,low,high);
    }
    
}
int main()
{
    int x[] = {6,7,8,3,1,2};
    int y[] = {1,2,3};
    int m,n;
    m = n = 3;
    int z[m+n];
    display(x,6);
    mergesort(x,0,5);
    display(x,6);
}