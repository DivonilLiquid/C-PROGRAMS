#include <bits/stdc++.h>

using namespace std;
int romanToInt(string s) {
    int i=0,as[4000];
    stack<char> a;
    while(s[i]!='\0'){
        if(a.empty()){
            a.push(s[i]);
        }
        else{
            if(a.top()>s[i]){
                a.push(s[i]);
            }
            else{
                /// reverse stack top element with the entered element from array
            }
        }
        i++;
    }
    /// stack has elemts all arranged in ascending order and some elements are arranged in an array
    int test=0;
    /*while(a.empty()){
        switch(a.top()){
            case 'I':
                test+=1;
                break;
            case 'V':
                test+=5;
                break;
            case 'X':
                test+=10;
                break;
            case 'L':
                test+=50;
                break;
            case 'C':
                test+=100;
                break;
            case 'D':
                test+=500;
                break;
            case 'M':
                test+=1000;
                break;
            default:
                test+=0;
                break;
        }
        cout<<a.top()<<",";
        a.pop();
    }
    cout<<test<<endl;
*/
while(a.empty()){
    cout<<a.top()<<",";
    a.pop();
}
}
int main()
{
    string A;
    getline(cin,A);
    romanToInt(A);
    return 0;
}
