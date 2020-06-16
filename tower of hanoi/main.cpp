#include <iostream>

using namespace std;
void towerofhanoi(int n ,char src,char help,char dest){
    if(n==0){
        return ;
    }
    else{
        towerofhanoi(n-1,src,dest,help);
        cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
        towerofhanoi(n-1,help,src,dest);
    }
}
int main()
{
    int n;
    cin>>n;
    towerofhanoi(n,'A','B','C');
    return 0;
}
