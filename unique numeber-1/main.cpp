#include <iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums){
    int l=nums.size();
    int ans=nums[0];
    for(int i=1;i<l;i++){
        ans=ans^nums[i];
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> num;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        num.push_back(t);
    }
    cout<<singleNumber(num)<<endl;
    return 0;
}
