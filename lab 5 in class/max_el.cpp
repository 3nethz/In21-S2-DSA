#include <bits/stdc++.h>
#include <vector>

using namespace std;
int swaps(vector<int>& v)
{
    auto sorted = v; 
    sort(sorted.begin(),sorted.end());
    auto n = v.size();
    cout <<
    map<int, int> m;
    for (auto i=0u; i<n; ++i)
        m[v[i]] = i;
    
    auto swaps = 0;
    for (auto i=0u; i<n; ++i)
    {
        auto expected = sorted[i]; // we expect this element to be here
        if (expected != v[i])
        {
            swaps++;
            auto expectedPos = m[expected]; // real position of the expected element
            m[v[i]] = expectedPos; // update the position of the element out of order
            swap(v[i], v[expectedPos]); // fix, at least, the expected element position
        }
    }
    
    return swaps;
}

int main()
{
    using namespace std;
    int n; cin >> n;
    vector<int> v(n);
    copy_n(istream_iterator<int>(cin), n, begin(v));
    vector<int> reversed(rbegin(v), rend(v));
    cout << swaps(v) << swaps(reversed);
}