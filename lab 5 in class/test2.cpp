#include <bits/stdc++.h>
using namespace std;
vector <string> split_string(string);

int lilysHomework(vector<int> arr) {
    int result = INT_MAX;
    vector<int> sorted(arr);
    sort(sorted.begin(), sorted.end(), greater<int>());
    for (int i = 0; i < 2; i++) {
        int swaps = 0;
        if (i) {
            reverse(sorted.begin(), sorted.end());
        }
        vector<int> newArr(arr);

        unordered_map<int, int> position;
        for (int i = 0; i < newArr.size(); i++) {
            position[newArr[i]] = i;
        }
        for (int i = 0; i < newArr.size(); i++) {
            if (newArr[i] == sorted[i]) {
                continue;
            }
            int arrElemnt = newArr[i];
            int sortElement = sorted[i];
            swap(newArr[i], newArr[position[sortElement]]);
            swaps++;
            position[arrElemnt] = position[sortElement];
            position[sortElement] = i;
        }
        result = min(result, swaps);
    }
    return result;
}