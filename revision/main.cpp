#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long int
ll gcd(ll a,ll b){
    /// base case
    if(b==0){
        return a;
    }
    else{
        gcd(b,a%b);
    }
}
ll lcm(ll n1,ll n2){
    return (n1*n2)/gcd(n1,n2);
}
int main()
{

    ll n1,n2;
    cin>>n1>>n2;
    cout<<"lcm of two is : "<<lcm(n1,n2)<<endl<<"gcd of two is : "<<gcd(n1,n2);
    return 0;
}
