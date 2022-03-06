#include <iostream>
#include <math.h>
using namespace std;

// Prime Number between 2 numbers
// bool isPrime(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<b;i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// fibonacci series

// void fib(int a){
//     int t1=0;
//     int t2=1;
//     int nextTerm;
//     for(int i=0;i<a;i++){
//         cout<<t1<<" ";
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     fib(n);
//     return 0;
// }

// Factorial of a number
// void fac(int n)
// {
//     int factorial = 1;
//     while (n)
//     {
//         factorial = factorial * n;
//         n--;
//     }
//     cout << factorial << endl;
//     return;
// }

// int main()
// {
//     int a;
//     cin >> a;
//     fac(a);
//     return 0;
// }

// Finding nCr
// int fac(int a){
//     int factorial=1;
//     while(a){
//         factorial *=a;
//         a--;
//     }
//     return factorial;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;
//     int solution=(fac(n)/(fac(n-r)*fac(r)));
//     cout<<solution<<endl;
//     return 0;
// }

// Pascals triangle

int fac(int n)
{
    int factorial = 1;
    while (n)
    {
        factorial *= n;
        n--;
    }
    return factorial;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (fac(i) / (fac(i - j) * fac(j))) << " ";
        }
        cout << endl;
    }
    return 0;
}