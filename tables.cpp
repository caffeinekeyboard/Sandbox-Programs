#include<iostream>
using namespace std;
void make10table(int x)
{
    for(int i=1 ; i<=10 ; i++)
    {
        cout<<x*i<<" ";
    }
}
int main()
{
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    make10table(x);
    return 0;
}