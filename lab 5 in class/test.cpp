#include <bits/stdc++.h>

using namespace std;

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
 
// Function to print the vector ans
void printResult(vector<int>& ans)
{
 
    // Traverse the vector ans
    for (auto& it : ans) {
 
        // Print elements
        cout << it << ' ';
    }
}

int indexFunc(vector<int> arr,int k) {
     
     int n = arr.size(),index;
     for (int i = 0; i < n ; i++)
     {
        if (k == arr[i]){
            index = i;
        }

     }
     return index;
}

int lilysHomework(vector<int> arr) {
    int countf = 0, countr = 0;
    if(arr.size() == 1)
        return 0;
    else if ()


}


