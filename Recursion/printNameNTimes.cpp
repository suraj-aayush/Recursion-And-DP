#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if(i==n)
    return;

    cout<<"Aayush 2.0 "<<i+1<<endl;

    print(i+1,n);
}

int main()
{
    print(0, 5);

    return 0;
}