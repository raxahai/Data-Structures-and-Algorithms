#include <bits/stdc++.h>
using namespace std;

void show(stack <int> s){
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    show(s);
    s.pop();
    show(s);
}