#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(5,10);
    for(int i=v.begin();i<v.end();i++){
        cout<<*i<<",";
    }
    cout<<endl;
    return 0;
}
