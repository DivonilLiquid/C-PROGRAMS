#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int t=x,rev=0;
        while(t){
            rev=rev*10+(t%10);
            t=t/10;
        }
        if(rev==x){
            return true;
        }
        else
        {
            return false;
        }
}
};
int main()
{
    Solution t;
    int p;
    cin>>p;
    if(t.isPalindrome(p))
        cout<<"True";
    else
        cout<<"false";
    return 0;
}
