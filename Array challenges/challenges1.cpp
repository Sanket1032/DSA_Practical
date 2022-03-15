#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int maximum = INT_MIN;
//     for (int j = 0; j <n ; j++)
//     {
//         maximum = max(maximum, arr[j]);
//     }
//     cout << maximum << " ";

//     return 0;
// }

// Adding all the subarrays
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             cout << sum << endl;
//         }
//     }

//     return 0;
// }

// Finding the max arthmatic array
// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int pd = arr[1] - arr[0];
//         int curr = 2;
//         int ans = 2;
//         int j = 2;
//         while (j < n)
//         {
//             if (pd == arr[j] - arr[j - 1])
//             {
//                 curr++;
//             }
//             else
//             {
//                 pd = arr[j] - arr[j - 1];
//                 curr = 2;
//             }
//             ans = max(ans, curr);
//             j++;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// Record breaker
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        arr[n] = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            cout << "1" << endl;
        }
        int ans = 0;
        int mx = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mx)
            {
                ans++;
            }
            mx = max(arr[i], mx);
        }
        cout << ans << endl;
    }
    return 0;
}