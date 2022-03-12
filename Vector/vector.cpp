#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

//     for(auto element:v){
//         cout<<element<<" ";
//     }

//     vector<int>::iterator it;
//     for(it=v.begin();it!=v.end();it++){
//         cout<<*it<<" ";
//     }

//     v.pop_back();
//     vector<int> v2 (3,50);
//     swap(v,v2);

//     pair <int,char> p;
//     p.first=1;
//     p.second='s';
// }

// reduce the array using vector
// 10 16 7 14 5 3 12 9
// 4 7 2 6 1 0 5 3

bool mySort(pair<int,int> p1,pair<int,int> p2){ 
    return p1.first<p2.first;
}

int main(){
    int arr[]={10,16,7,14,5,3,12,9};
    vector < pair<int,int> > v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        //  pair<int,int> p;
        //  p.first=arr[i];
        //  p.second=i;
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),mySort);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

