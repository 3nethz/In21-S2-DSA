#include <bits/stdc++.h>

using namespace std;

long long dfs(vector<int> &visited,list<int> *adj,int s)
{
    visited[s]=1;
    list<int> ::iterator it;
    long long sum=1;
    for(it=adj[s].begin();it!=adj[s].end();it++)
    {
        if(visited[*it]==0)
            sum+=dfs(visited,adj,*it);
    }
    return sum;
}

int main(){
   
        int n;
        int m;
        long x;
        long y;
        long long sum=0;
        cin >> n >> m >> x >> y;
    vector<int> visited(n,0);
        list<int> *adj=new list<int>[3];
        for(int a1 = 0; a1 < m; a1++){
            int city_1;
            int city_2;
            cin >> city_1 >> city_2;
            adj[city_1-1].push_back(city_2-1);
            adj[city_2-1].push_back(city_1-1);
            for
        }



}