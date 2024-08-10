#include <bits/stdc++.h>
#include <vector>

using namespace std;

double median(vector<int> data, int size){
    double med = 0;
    if (size % 2 == 1){
        return data[size/2];
    }
    return (data[(size-1)/2]+ data[size/2])/2.0;    
}

void insertionSort (vector<int> &data, int n)
{
int i, j, tmp;

 for (i=1; i<n; i++)
 {
     j=i;
     tmp=data[i];
      for (int k = 0; k < i; k++)
     {
        cout << data[k] << " ";
     }
     cout << std::fixed << std::setprecision(1);
     cout << "median:" << median(data,i);
     cout << endl;
     
     while (j>0 && tmp<data[j-1])
     {
           data[j]=data[j-1];
           j--;
     }
     data[j]=tmp;
}
}

int main() {
   int a;
   vector<int> v;
   // user can add element as much as they want
   while(cin>>a)
   { 
       v.push_back(a);
   }
   int n = v.size();
   insertionSort(v,n);
   for(auto &p : v)
   {
      cout<<p<<" ";
   }
   cout << "median:"<< median(v,n);
    cout << endl;
   return 0;
   
}