#include <iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    int a=0,b=0;
    for(int it:nums){
        for(int jt:nums){
            if(it+jt==target){
                a=it,b=jt;
            }
        }
    }
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    return v;
}
int main()
{
    vector<int> num;
    for(int i=0;i<4;i++){
        int n;
        cin>>n;
        num.push_back(n);
    }
    int target=9;
    vector <int>v=twoSum(num,target);
    for(int i: v){
        cout<<v[i]<<",";
    }
    return 0;
}
