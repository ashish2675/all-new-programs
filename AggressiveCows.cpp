#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPossible(ll arr[], int n, int d, int c)
{
    ll cnt = 1;
    ll lst = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lst >= d)
        {
            lst = arr[i];
            cnt++;
        }
        if (c == cnt)
            return true;
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll st = 0, en = arr[n - 1] - arr[0];
        ll ans = -1;
        while (st <= en)
        {
            ll mid = (st + en) / 2;
            if (isPossible(arr, n, mid, c))
            {
                st = mid + 1;
                ans = mid;
            }
            else
            {
                en = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
