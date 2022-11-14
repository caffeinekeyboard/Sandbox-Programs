#include<iostream>
using namespace std;
int HCF(int x, int y)
{
    if(x>y)
    {
        for(int i=y ; i>=1 ; i--)
        {
            if((x%i == 0)&&(y%i) == 0)
            {
                return i;
            }
        }
    }
    else if(x<y)
    {
        for(int i=x ; i>=1 ; i--)
        {
            if((x%i == 0)&&(y%i) == 0)
            {
                return i;
            }
        }
    }
    else
    {
        return x;
    }
}
void coPrimeChecker (int x,int y)
{
    if(HCF(x,y) == 1)
    {
        cout<<"The numbers are coprime.";
    }
    else
    {
        cout<<"The numberse are NOT coprime.";
    }
}
int main()
{
    int x,y;
    cout<<"Enter the numbers:";
    cin>>x>>y;
    coPrimeChecker(x,y);
    return 0;
}