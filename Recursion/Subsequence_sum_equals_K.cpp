#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsequence(int i, vector<int>&ds, vector<int>&str, int n, int k)
{
    
    if(i==n)
    {
        int sum=0;
        for(auto it:ds)
        {
            sum+=it;
        }
        
            if(sum==k)
            {
                for(auto it:ds)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }

              
        return;
    }
    subsequence(i+1,ds,str,n,k);

    ds.push_back(str[i]);
    subsequence(i+1,ds,str,n,k);

    ds.pop_back();

}

int main()
{
    vector<int>str={1,2,1,1,3};
    vector<int>ds;
    subsequence(0,ds,str,5,6);

    return 0;
}