#include "bits/stdc++.h"
using namespace std;

int swaps(vector<int> & arr)
{
    auto sorted = arr;
    sort(sorted.begin(),sorted.end());
    int n = arr.size();
    
    map<int,int> dict;
    for (auto i = 0u; i < n; i++)
    {
       dict[arr[i]] = i;
    }
    
}
