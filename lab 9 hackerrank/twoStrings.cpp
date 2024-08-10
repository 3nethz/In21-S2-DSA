#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2){
    set<char> set1;
    set<char> set2;
    set<char> intersection;
    for (int  i = 0; i < s1.length(); i++)
    {
        set1.insert(char(s1[i]));
    }
    for (int i = 0; i < s2.length(); i++)
    {
        set2.insert(char(s2[i]));
    }
    set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(), inserter(intersection,intersection.begin()));   
    if(intersection.empty()){
        return "NO";
    }
    else 
        return "YES";
}

int main(){
    string x = "thineth";
    string y = "jith";
    cout << twoStrings(x,y);
}