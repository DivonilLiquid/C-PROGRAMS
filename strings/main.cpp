#include <iostream>
#include<cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[10][10];
    for(int j=0;j<n;j++){
        cin.getline(a[j][10]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i][10]<<endl;
    }
    return 0;
}
