#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cntMaxi = 1;
    int cnt = 1;
    for (int i = 0, j = 1; j < s.size(); j++)
    {
        if (s[i] != s[j])
        {
            cnt = 1;
            i = j;
        }
        else
        {
            cnt++;
        }
        cntMaxi = max(cnt, cntMaxi);
    }

    cout << cntMaxi;
    return 0;
}