/*#include <iostream>
using namespace std;
int main()
{
    float r;
    cin>>r;
    cout<<"Area of circle "<<3.14*r*r<<endl;
    cout<<"Circumference of cirlce "<<2*3.14*r;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2 == 0){
        cout<<"even";
    }
    else cout<<"odd";
}
#include <iostream>
using namespace std;
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    cout<<"Gross Salary :"<<a[0]+a[1]+a[2];
}*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Make a rectangular shape by a single digit number :"<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if((i==0 || j==0)||(i==n|| j==n-2))
            {
                cout<<n;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}