#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f(int n)
{
    if(n==1)
    return;

n--;
    cout<<n<<" ";
    f(n);
}
int main()
{
    int n=5;
    f(n+1);

    return 0;
}