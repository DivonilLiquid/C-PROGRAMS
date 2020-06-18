#include <iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int res=0;
void create(char *s,char *s2,int i,int j,vector<string>&v){
    if(s[i]=='\0'){
        res++;
        s2[j]='\0';
        string k(s2);
        v.push_back(k);
        return;

    }
       s2[j]=s[i];
       create(s,s2,i+1,j+1,v);
       create(s,s2,i+1,j,v);
}
int main()
{
    char in[1000];
    cin>>in;
    char op[1000];
    vector<string>v;
    create(in,op,0,0,v);
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl<<res;
    return 0;
}
