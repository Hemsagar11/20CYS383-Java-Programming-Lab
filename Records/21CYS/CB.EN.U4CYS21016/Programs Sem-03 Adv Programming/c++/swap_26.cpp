#include <iostream>
using namespace std;
 /*void swap(int *a,int *b)
 {intt temp=*a;
  *a=*b;
*b=temp;//It can also be used
 }*/
void swap(int &a, int &b) 
{
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int x=11;
    int y=12;
    swap(x,y);
    cout<<x<<" "<<y;
}