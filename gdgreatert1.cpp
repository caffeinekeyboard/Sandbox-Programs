#include<iostream>
using namespace std;
int smallestdivisor(int x)
{
    int i=(x-1);
    while(i>=1)
    {
        if((x%i)==0)
        {
            return i;
            break;
        }
        else
        {
            i--;
        }
    }
}
int main()
{
    int x;
    cout<<"Enter your number: ";
    cin>>x;
    cout<<"Greatest Divisor lesser than number: "<<smallestdivisor(x);
    return 0;
}