#include <iostream>
using namespace std;
class A{
    private:
    int x;
    int y;
    public:
    A()
    {
        x=5;
        y=6;
    }
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    A t1(10,20),t2;
    t2=t1;//Copy constructor
    A.display();
}