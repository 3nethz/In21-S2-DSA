#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> arr) {
    int p = arr[0];
    int n = 5;
    int j = 0, i = j - 1;
    while (j < n){
    if (arr[j] > p){
        j++;
    }
    if (arr[j] < p){
        j++;
        i++;
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    }
    return arr;
}
int main(){
    vector<int> arr = {7,5,4,3,2};
    quickSort(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}