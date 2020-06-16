#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a = new int [n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*
    we know that xor operator eliminates the duplicate element in an array so if we xor every element then we will get one unique number
    here we have to find 2 xor numbers , wo we will do some extra work
    3-0011
    1-0001    xor result =0010
    2-0010    xor result =0000
    1-0001    xor result =0001
    */
    int x=a[0];
    for(int i=1;i<n;i++){
        x^=a[i];
    }
    int set_bit=x & ~(x-1);
    int p=0,q=0;
   for(int i = 0; i < n; i++)
    {
        if(a[i] & set_bit)
        p = p ^ a[i];
        else
        q = q ^ a[i];
    }
    cout<<p<<" "<<q<<endl;
    return 0;
}
