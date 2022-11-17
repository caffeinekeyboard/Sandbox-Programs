#include<iostream>
using namespace std;
bool isPrime(int x)
{
    for(int i=2 ; i<x ; i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int primeup(int x)
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
int primedown(int x)
{
    for(int i=x-1 ; i<x ; i--)
    {
        if(isPrime(i))
        {
            return i;
            break;
        }
    }
}
int nearestprime(int x)
{
    if((x-primedown(x))>(primeup(x)-x))
    {
        return primeup(x);
    }
    else
    {
        return primedown(x);
    }
}
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Nearest prime number is: "<<nearestprime(x);
    if(isPrime(x))
    {
        cout<<"\nThis number is prime as well.";
    }
    return 0;
}