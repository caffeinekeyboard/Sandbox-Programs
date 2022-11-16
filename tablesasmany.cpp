#include<iostream>
using namespace std;
void tablesasmany(int x , int y)
{
    for(int i=1 ; i<=y ; i++)
    {
        cout<<i*x<<" ";
    }
}
int main()
{
    int x,y;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the count: ";
    cin>>y;
    tablesasmany(x,y);
    return 0;
}