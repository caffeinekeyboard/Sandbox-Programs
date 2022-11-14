#include<iostream>
using namespace std;
bool factorChecker(int n, int m)
{
    if(n%m == 0)
    return true;
    else 
    return false;
}
bool primeChecker(int m)
{
    for(int i=2 ; i<m ; i++)
    {
        if(m%i==0)
        {
            return false;
        }
    }
    return true;
}
void primeFactorPrinter(int n)
{
    for(int m=2 ; m<=n; m++)
    {
        if(primeChecker(m)&&factorChecker(n,m))
        {
            cout<<m<<" ";   
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    primeFactorPrinter(n);
    return 0;
}