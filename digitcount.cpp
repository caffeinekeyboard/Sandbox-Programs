#include<iostream>
#include<math.h>
using namespace std;
int digitcouter(int x)
{
    int count;
    for(int i=0 ; i<=x ; i++)
    {
        if(x>=pow(10,i))
        {
            count = i;
            continue;
        }
        else 
        {
            break;
        }
    }
    return (count+1);
}
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"No. of digits: "<<digitcouter(x);
    return 0;
}