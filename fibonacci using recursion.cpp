#include <iostream>
using namespace std;
bool sort (int x[],int y)
{
    if(y==1)
    return true;
    if(x[0]<=x[1] && sort(x+1,y-1))
    {
      return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<"Finding if an array is Sorted or not: ";
    int a[]={1,2,4,3,5,6};
    if(sort(a,6)==1)
    {
      cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted";
    }
    return 0;
}
