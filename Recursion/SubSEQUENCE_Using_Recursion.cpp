#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsequence(int i,vector<int> &ds, vector<int>&str, int n)
{
    if(i==n)
    {
        for(auto it: ds)
        {
            cout<<it<<" ";
        }

        if(ds.size() == 0)
        cout<<"{}";

         cout<<endl;

         return;
    }
subsequence(i+1, ds, str, n);

    ds.push_back(str[i]);
    subsequence(i+1, ds, str, n);

    ds.pop_back();
    
}

int main()
{
    vector<int> str={3,1,2};
    vector<int>ds;
    subsequence(0,ds, str,3);

    return 0;
}