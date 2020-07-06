#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j,a[n][n],b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int N=0,S=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[N][S];
            N++;
        }
        N=0;S--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
