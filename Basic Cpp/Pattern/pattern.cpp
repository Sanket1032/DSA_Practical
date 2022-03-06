#include <iostream>
using namespace std;


// Printing a rectangle pattern 
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Printing a hollow rectangle pattern
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0 || i==row-1 || j==0 || j==col-1){
                cout<<"*"<<" ";
            }
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

// Printing a inverted half pyramid

int main(){
    int n;
    cin>>n;
    while(n>0){
        for(int i=n;n>0;i--){
            cout<<"*"<<" ";
        }
        n--;
    }
    return 0;
}