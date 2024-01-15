#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    if(size ==0 || size==1)
    return true;

    if(arr[0] > arr[1])
    return false;

    return isSorted(arr+1, size-1);
}

int main()
{
    int arr[7]={1,2,3,5,6,7,8};         //  S O R T E D
    cout<<isSorted(arr, 7)<<endl;

    int str[7]={1,2,10,5,6,7,8};        // S O R T E D
    cout<<isSorted(str, 7);

    return 0;
}