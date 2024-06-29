#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.pop_back();
    // v.erase(v.begin() + 1);
    v.erase(v.begin() + 1);

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // sort(v.begin(), v.end(), greater<int>());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    for (int i : v)
    {
        cout << i << " ";
    }
}