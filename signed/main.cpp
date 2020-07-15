#include <iostream>

using namespace std;
int reverse (int x){
    int t=0;
    if(x>0){
        while(x){
        t=t*10+x%10;
        x=x/10;
        }
    }
    else{
        while(x){
        t=t*10+x%10;
        x=x/10;
    }
    }
    return t;
}
int main()
{
    signed int a=-120;
    int res=reverse(a);
    res=res*(-1);
    cout<<res;
    return 0;
}
