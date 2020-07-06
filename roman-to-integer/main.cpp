#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char arr[7]={'I','V','X','L','C','D','M'};
    int value[7]={1,5,10,50,100,500,1000};
    int romanToInt(string s) {
        int i=0,t=1,final=0;
        while(s[t]!='\0'){
            int ta=0,tb=0;///these two will handle the cases
            for(int j=0;i<7;i++){
                if(s[i]==arr[j]){
                    ta=j;
                }
            }
            for(int j=0;i<7;i++){
                if(s[t]==arr[j]){
                    tb=j;
                }
            }
            if(ta>tb){
                final=final+value[ta];
                cout<<final<<endl;
            }
            else{
                final=final-2*value[tb];
                cout<<final<<endl;
            }
            i++;
            t++;
    }
    ///cout<<final<<endl;
    }
};
int main(){
    Solution s;
    string s = "MCMXCIV";
    s.romanToInt(s);
    return 0;
}
