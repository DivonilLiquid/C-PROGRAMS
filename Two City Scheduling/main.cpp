/*
There are 2N people a company is planning to interview. The cost of flying the i-th person to city A is costs[i][0], and the cost of flying the i-th person to city B is costs[i][1].

Return the minimum cost to fly every person to a city such that exactly N people arrive in each city.



Example 1:

Input: [[10,20],[30,200],[400,50],[30,20]]
Output: 110
Explanation:
The first person goes to city A for a cost of 10.
The second person goes to city A for a cost of 30.
The third person goes to city B for a cost of 50.
The fourth person goes to city B for a cost of 20.

The total minimum cost is 10 + 30 + 50 + 20 = 110 to have half the people interviewing in each city.


Note:

1 <= costs.length <= 100
It is guaranteed that costs.length is even.
1 <= costs[i][0], costs[i][1] <= 1000

*/
#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool mycompare(vector<int>v1,vector<int>v2){
    int r1=abs(v1[1]-v1[0]);
    int r2=abs(v2[0]-v2[0]);
    if(r2>r1){
        return v2>v1;
    }
    return v1>v2;
}
int twoCitySchedCost(vector<vector<int>>& costs) {
    int res=0;
    int n=costs.size();
    sort(costs.begin(),costs.end(),mycompare);
    for(int i=0;i<n;i++){
        res+=min(costs[i][0],costs[i][1]);
    }
    return res;
}
int main()
{
    vector<vector<int>> costs;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<2;j++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        costs.push_back(v);
    }
    cout<<twoCitySchedCost(costs);
    return 0;
}
