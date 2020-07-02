#include <iostream>
using namespace std;
int calc(int x){
    int a,b,c;
    a=x/2;b=x/3;c=x/4;
    return a+b+c;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<=2 && n>=0){
	        cout<<n;
	    }
	    else
	    cout<<calc(n);
	}
	return 0;
}
