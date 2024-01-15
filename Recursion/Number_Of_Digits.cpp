#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int digits(int n)
{
    if(n==0)
    return 0;

    return 1 + digits(n/10);
}

int main()
{
    cout<<digits(34578787);

    return 0;
}