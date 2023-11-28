#include<bits/stdc++.h>
using namespace std;


void subsequence(int ind, int s, int k, int n, int arr[], vector<int>&ans)
{
    if(ind ==n )
    {
        if(s==k)
        {
            for(auto c: ans)
            cout<<c<<" ";
            
            cout<<endl;
        }
        return;
    }

ans.push_back(arr[ind]);
s+=arr[ind];
subsequence(ind+1, s, k, n, arr, ans);

ans.pop_back();
s-=arr[ind];
subsequence(ind+1, s, k, n, arr, ans);

}

int main()
{
    int arr[] = {1,4,6,2,3,7};
    int k=9;
    int n=6;
    int ini_sum=0;
    int ind=0;
    vector<int> ans;
    subsequence(ind, ini_sum, k, n, arr, ans);

    return 0;
}