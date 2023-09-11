#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {

        ll row, col;
        cin >> row >> col;
        ll diagonal = 1;
        if (row >= col)
            diagonal = row * row - (row - 1);
        else
            diagonal = col * col - (col - 1);


        if (row == col)
            cout << diagonal << endl;
        else if (row > col)
        {
            if (row % 2 == 0)
                cout << diagonal + abs(row - col) << endl;
            else
                cout << diagonal - abs(row - col) << endl;
        }
        else
        {
            if (col % 2 == 0)
                cout << diagonal - abs(row - col) << endl;
            else
                cout << diagonal + abs(row - col) << endl;
        }
    }
    return 0;
}