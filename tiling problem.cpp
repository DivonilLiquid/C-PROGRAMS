#include <iostream>
using namespace std;
int building(int n)
{
    if(n==1||n==2||n==3)
     {
         return 1;
     }
    if(n==4)
    {
        return 2;
    }
    return building(n-1)+building(n-4);

}
int main() {
    int b;
    cout<<"enter the breadth of the building: ";
    cin>>b;
    cout<<building(b);
    return 0;
}
