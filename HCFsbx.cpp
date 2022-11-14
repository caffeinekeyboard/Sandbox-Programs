#include<iostream>
using namespace std;
void HCF(int x, int y)
{
    if(x>y)
    {
        for(int i=y ; i>=1 ; i--)
        {
            if((x%i == 0)&&(y%i) == 0)
            {
                cout<<"HCF is: "<<i;
                return;
            }
        }
    }
    else if(x<y)
    {
        for(int i=x ; i>=1 ; i--)
        {
            if((x%i == 0)&&(y%i) == 0)
            {
                cout<<"HCF is: "<<i;
                return;
            }
        }
    }
    else
    {
        cout<<"Numbers are same, HCF is: "<<x;    
    }
}
int main()
{
    int x,y;
    cout<<"Enter the numbers:";
    cin>>x>>y;
    HCF(x,y);
    return 0;
}