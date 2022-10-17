#include <bits/stdc++.h>
using namespace std;

int pairSum(int *arr, int n, int num)
{
    int c = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i != j && arr[i] + arr[j] == num)
                c++;
        }
    }

    return c;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;

        cin >> size;
        int input[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cin >> x;

        cout << pairSum(input, size, x) << endl;
    }
    return 0;
}
