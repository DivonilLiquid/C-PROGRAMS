#include <bits/stdc++.h>
using namespace std;
bool mycompare(int a,int b){
    return a<b;
}
int shorter(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n,mycompare);
    sort(b,b+n,mycompare);
    pair<int,int>p[n];
    for(int i=0;i<n;i++){
        p[i]=make_pair(a[i],b[i]);
    }
    int finals=0;
    for(int i=0;i<n;i++){
        finals+=shorter(p[i].first,p[i].second);
    }
    cout<<finals<<endl;
    }
    return 0;
}
