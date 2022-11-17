#include<iostream>
using namespace std;
void fibonacciprinter(int c)
{
    unsigned long long prev=1, befprev=0;
    cout<<"0 1 "; 
    for(int i=1 ; i<=c ; i++)
    {
        cout<<(prev+befprev)<<" ";
        unsigned long long t = prev;
        prev = (prev+befprev);
        befprev = t;
    }
}
int main()
{
    int c;
    cout<<"How many Fibonacci numbers do you want to print?\n";
    cin>>c;
    fibonacciprinter(c);
    return 0;
}