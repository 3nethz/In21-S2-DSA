#include <bits/stdc++.h>

using namespace std;

int indexFunc(vector<int> arr,int k) {
     
     int n = arr.size(),index = 0;
     for (int i = 0; i < n ; i++)
     {
        if (k == arr[i]){
            index = i;
        }

     }
     return index;
}
vector<int> slicing(vector<int>& arr,
                    int X, int Y)
{
    // Starting and Ending iterators
    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;
 
    // To store the sliced vector
    vector<int> result(Y - X + 1);
 
    // Copy vector using copy function()
    copy(start, end, result.begin());
 
    // Return the final sliced vector
    return result;
}

int lilysHomework(vector<int> arr) {
    int count = 0;
    vector<int> arr1 = arr;
    sort(arr1.begin(),arr1.end());
    int index1 = indexFunc(arr1,arr[0]);
    if (arr.size() == 1){
        return 0;
    }
        //sort(arr2.begin(),arr2.end(),greater <>()); 
    else{ 
    while (index1 != 0){
            int temp = arr[index1];
            arr[index1] = arr[0];
            arr[0] = temp;
            count++;
            }
    return count + lilysHomework(slicing(arr,1,arr.size()));
}
}



int main(){
    vector<int> arr{ 1, 3, 4, 5, 4, 10, 1 };
    int x = lilysHomework(arr);
    cout << x << endl;
}