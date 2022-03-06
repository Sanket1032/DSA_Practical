#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// Print prime or not
int main(){
    int n;
    cin>>n;
    int flag=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Not a prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime"<<endl;
    }
    return 0;
}

// Reverse Number
int main(){
    int n;
    cin>>n;
    int number;
    while(n){
        int last=n%10;
        number=number*10+last;
        n=n/10;
    }
    cout<<number<<endl;
    return 0;
}

// Armstrong Number
int main(){
    int n;
    cin>>n;
    int originalN=n,sum=0;
    while(n){
        int last=n%10;
        sum+=pow(last,3);
        n=n/10;
    }
    if(originalN==sum){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}