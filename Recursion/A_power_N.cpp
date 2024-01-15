#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// FIND A^n

int power(int a,int n)
{
    if(n==0)
    return 1;

    if(n==1)
    return a;

    return a * power(a, n-1);
}


int main()
{
    int ans = power(4,2);
    cout<<ans;

    return 0;
}