#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        vector<int> a;
        for (int i = 2; i <= n; i += 2)
            a.push_back(i);
        for (int i = 1; i <= n; i += 2)
            a.push_back(i);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}