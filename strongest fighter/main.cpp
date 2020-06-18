#include <iostream>
#include<deque>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    deque<int> Q(k);
    for(int i=0;i<k;i++){
        while(!Q.empty() && a[Q.back()]<a[i]){
            Q.pop_back();
        }
        Q.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<a[Q.front()]<<" ";
        ///compress
        while(!Q.empty() && (Q.front()<=i-k)){
            Q.pop_front();
        }
        ///unwanted
        while(!Q.empty() && a[i]>=Q.back()){
            Q.pop_back();
        }
        ///expand
        Q.push_back(i);
    }
    cout<<a[Q.front()];
    return 0;
}
