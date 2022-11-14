#include<iostream>
using namespace std;
void LCM(int x,int y)
{
    if(x>y)
    {
        for(int i=x ; i<=(x*y) ; i++)
        {
            if((i%x == 0)&&(i%y == 0))
            {
                cout<<"LCM is: "<<i;
                return;
            }
        }
    }
    else if(y>x)
    {
        for(int i=y ; i<=(x*y) ; i++)
        {
            if((i%x == 0)&&(i%y == 0))
            {
                cout<<"LCM is: "<<i;
                return;
            }
        }
    }
    else
    {
        cout<<"Equal numbers, LCM is: "<<x;
    }
}
int main()
{
    int x,y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;
    LCM(x,y);
    return 0;
}
    
    

