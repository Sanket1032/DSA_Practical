#include <iostream>
using namespace std;

// Using continue to print the numbers not divisible by 3
int main()
{
    for (int i = 0; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}

// Using break to find whether the number is prime or not
int main()
{
    int a;
    cin >> a;
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << "Non Prime" << endl;
            break;
        }
    }
    if (i == a)
    {
        cout << "Prime" << endl;
    }
    return 0;
}

// Print all the prime numbers between 1 and 100
int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a;num<b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<" ";
        }
    }

    return 0;
}

// using switch
int main(){
    char a;
    cin>>a;
    switch(a){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Hell"<<endl;
            break;
        case 'c':
            cout<<"Hel"<<endl;
            break;
        case 'd':
            cout<<"He"<<endl;
            break;
        case 'e':
            cout<<"H"<<endl;
            break;
        default:
            cout<<"Hey"<<endl;
            break;
        
    }
    return 0;

}