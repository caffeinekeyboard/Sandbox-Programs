#include<iostream>
using namespace std;
void printnomultiples(int x, int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        if(i%x != 0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int x, n;
    cout<<"Enter the divisor number: ";
    cin>>x;
    cout<<"Enter the divident number: ";
    cin>>n;
    printnomultiples(x,n);
    return 0;
}