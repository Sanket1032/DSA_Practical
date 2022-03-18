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
// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int n;
//         cin >> n;
//         int arr[n + 1];
//         arr[n] = -1;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         if (n == 1)
//         {
//             cout << "1" << endl;
//         }
//         int ans = 0;
//         int mx = -1;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] > mx)
//             {
//                 ans++;
//             }
//             mx = max(arr[i], mx);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// least index recurring array
// int main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int a;
//         const int N=1e6+2;
//         int minarr[N];
//         int minval=INT_MAX;
//         for(int i=0;i<N;i++){
//             minarr[i]=-1;
//         }
//         for(int i=0;i<n;i++){
//             if(minarr[arr[i]] != -1){
//                 minval = min(minval, minarr[arr[i]]);
//             }
//             else{
//                 minarr[arr[i]]=i;   
//             }
//         }
//         if(minval==INT_MAX){
//             cout<<"-1"<<endl;
//         }
//         else{
//            cout<<minval+1<<endl;
//         }
//     }
//     return 0;
// }

// Subarray with given sum
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int s;
//     cin>>s;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         int start=i;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if (sum == s)
//             {
//                 cout << start << " "<<j<<endl;
//                 return 0;
//             }
//         }
        
//     }
//     return 0;
// }

// Alternative to the above with o(n) time complexity
// int main(){
//     int n;
//     return 0;
// }

// Finding the smallest positive number in the array
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}