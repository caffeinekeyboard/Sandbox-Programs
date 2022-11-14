#include<iostream>
using namespace std;
int factorial(int n)
{
    long long ans = 1;
    for(int i=n ; i>=1 ; i--)
    {
        ans = i*ans;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}
//Program returns non-sensical or incorrect for any value above 12.