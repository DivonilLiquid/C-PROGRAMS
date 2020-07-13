#include <iostream>

using namespace std;

int main()
{
    int n,a[100];
    cout << "enter the number of elements: " << endl;
    cin>>n;
    cout<<"enter elemets: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int p=1;p<n;p++)                           //loop will work till n-1 times
    {

        for(int i=0;i<n-p;i++)                     // number of times iteration will be done
        {

            if(a[i]>a[i+1])                        //shifting
            {
              int p=a[i];
              a[i]=a[i+1];
              a[i+1]=p;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
    return 0;
}
