#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    int i = 0;
    cin >> n;
    vector<int> v(n);
    while (i < n)
    {
        int j;
        cin >> j;
        v.push_back(j);
        i++;
    }
    for (int i : v)
    {
        cout << i;
    }
}