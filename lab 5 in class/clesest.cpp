#include <bits/stdc++.h>

using namespace std;

vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int min = INT_MAX;
    vector<int> closest;

    for (int i = 0; i < (arr.size() - 1); i++)
    {
        if((arr[i+1] - arr[i]) < min){
            min = (arr[i+1] - arr[i]);
        }
    }
    
    for (int i = 0; i < (arr.size() - 1); i++)
    {
        if((arr[i+1] - arr[i]) == min){
            closest.push_back(arr[i]);
            closest.push_back(arr[i+1]);
        }
    }
    return closest;
}

int main(){
    vector<int> arr = {7,5,4,3,2};
    closestNumbers(arr);
}