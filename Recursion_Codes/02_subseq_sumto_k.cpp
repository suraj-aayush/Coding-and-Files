#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(int ind, int n, int k, int sum, vector<int>&arr, vector<int>&ans)
{
    if(ind==n)
    {
        if(sum==k)
        {
            for(auto &it: ans)
            cout<<it<<" ";

            cout<<endl;
        }
        return;
    }
    // if(sum==k)
    // {
    //         for(auto & it: ans)
    //         cout<<it<<" ";

    //         cout<<endl;
    // }

    sum += arr[ind];
    ans.push_back(arr[ind]);
    solve(ind+1, n, k, sum, arr, ans);

    sum -= arr[ind];
    ans.pop_back();

    solve(ind+1, n, k, sum, arr, ans);

}

int main() {

    int k = 3;
    int n=3;
    int sum=0;
    vector<int>arr={3,1,2};
    vector<int>ans;

    solve(0, n, k, sum, arr, ans);


    return 0;
}