#include<iostream>
using namespace std;
int isPrime(int n)
{
    for(int i=2 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int nextprimenum(int x)
{
    for(int i=x+1 ; i>x ; i++)
    {
        if(isPrime(i))
        {
            return i;
            break;
        }
    }
}
int main()
{
    int x;
    cout<<"Enter any natural number: ";
    cin>>x;
    cout<<"The nearest prime number above this number is: "<<nextprimenum(x);
    return 0;
}