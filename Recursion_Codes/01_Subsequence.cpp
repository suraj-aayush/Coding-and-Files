#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// given an array-> print all the subsequences
// ex: 3,1,2 -> 3, 1, 2, 3 1, 3 2, 1 2, 3 1 2, {}

void solve(int ind, int n, vector<int>&arr, vector<int>&ans)
{
    if(ind>=n)
    {
        for(auto &it: ans)
        cout<<it<<" ";

        if(ans.size() == 0)
        cout<<"{}";

        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    solve(ind+1, n, arr, ans);

    ans.pop_back();
    solve(ind+1, n, arr, ans);
}

// T.C -> (2^n) * n
// S.C -> (n)

int main() {
    vector<int>arr={3,1,2};
    vector<int>ans;
    int n = arr.size();
    solve(0, n, arr, ans);
    

    return 0;
}