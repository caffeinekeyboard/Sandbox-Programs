#include<iostream>
using namespace std;
int smallestdivisor(int x)
{
    int i=2;
    while(i<=x)
    {
        if((x%i)==0)
        {
            return i;
            break;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int x;
    cout<<"Enter your number: ";
    cin>>x;
    cout<<"Smallest Divisor greater than 1: "<<smallestdivisor(x);
    return 0;
}