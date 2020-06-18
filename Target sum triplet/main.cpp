#include <iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    return a<b;
}
bool findtriplet(int *a,int n,int t){
    for(int p1=0;p1<n-2;p1++){
        int p2=p1+1;
        int p3=n-1;
        while(p2<p3){
            if(a[p1]+a[p2]+a[p3]==t){
                cout<<a[p1]<<" "<<a[p2]<<" "<<a[p3]<<endl;
                return true;
            }
            else if(a[p1]+a[p2]+a[p3]<t)
                p2++;
            else
            p3--;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int *a=new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    sort(a,a+n,compare);
    findtriplet(a,n,t);
    return 0;
}
