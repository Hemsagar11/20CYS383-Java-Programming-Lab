#include <iostream>
using namespace std;
int main()
{
    int n,rev,k;
    cout<<"Enter the number: ";
    cin>>n;
    k=n;
    while (k>0)
    {
        rev=(rev*10)+k%10;
        k=k/10;
    }
    cout<<"reverse : "<<rev<<endl;
    if (n == rev)
    {
        cout<<"The number is palindrome";
    }
    else cout<<"The number is not palindrome";

}