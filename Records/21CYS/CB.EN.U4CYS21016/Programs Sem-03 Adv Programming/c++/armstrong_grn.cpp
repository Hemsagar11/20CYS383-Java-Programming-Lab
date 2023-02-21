#include <iostream>
using namespace std;
void arm(int n)
{
    int i=0,num=0;
    int t,sum=0;
    while(i<n)
    {
        num=t;
        while(num!=0)
        {
            sum = sum+((num%10)*(num%10)*(num%10));
            num = num/10;
        }
        if(sum==t)
        {
            cout<<t<<" ";
            i++;
        }
        sum = 0;
        t++;
    }
}
int main()
{
    int n;
    cin>>n;
    arm(n);
    return 0;
}