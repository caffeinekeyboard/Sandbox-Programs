#include<iostream>
using namespace std;
void printDivisors(unsigned long long x)
{
    for(unsigned long long i=1 ; i<=x ; i++)
    {
        if(x%i == 0)
        {
            cout<<i;
            if(i<x)
            cout<<",";
            else
            cout<<".";
        }
    }
}
int main()
{
    unsigned long long x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"The divisors are: ";
    printDivisors(x);
    return 0;
}
