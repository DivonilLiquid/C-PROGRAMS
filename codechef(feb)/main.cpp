#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool mycompare(int a,int b){
return a>b;
}
int findshortest(int a,int b){
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
        int a;
        cin>>a;
        int A[a];
        int B[a];
        for(int i=0;i<a;i++){
            cin>>A[a];
        }
        for(int i=0;i<a;i++){
            cin>>B[a];
        }
        sort(A,A+a,mycompare);
        sort(B,B+a);                // sorted arrays

        for(int i=0;i<a;i++){
            cout<<A[a]<<"->"<<B[a]<<endl;
        }
        /*pair<int,int>p[a];         // array of pairs
        for(int i=0;i<a;i++){
            p[i]=make_pair(A[i],B[i]);
        }
        int final=0;
        for(int i=0;i<a;i++){
            //final+=findshortest(p[i].first,p[i].second);
            cout<<p[i].first<<"->"<<p[i].second<<endl;
        }
        //cout<<final;
    }*/
}
    return 0;
}
