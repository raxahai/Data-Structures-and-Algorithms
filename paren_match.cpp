#include <bits/stdc++.h>
using namespace std;

bool parenthesis_matching(stack <char> arr,string s){
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            arr.push(s[i]);
        }
        if (s[i] == ')')
        {
            if (arr.empty())
            {
                cout<<"Unbalanced Expression"<<endl;
                return false;
            }
            arr.pop();
        }
    }
    // char top = arr.top();
    if (!arr.empty())
    {
        cout<<"Unbalanced expression"<<endl;
        return false;
    }
    cout<<"Balanced expression"<<endl;
    return true;
}

int main()
{
    string s = "())(()3+5()";
    stack <char> arr;
    bool check = parenthesis_matching(arr,s);
    cout<<check;
}