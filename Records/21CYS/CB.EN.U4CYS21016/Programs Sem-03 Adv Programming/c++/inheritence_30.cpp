#include <iostream>
using namespace std;
/*
Private attributes in the base class cannot be accesed in the derived class.
but some private attributes can be accessed by using access specifier protected for 
the respective attribute.

types of inheritence:

public - public,protected attributes in base class can be accessed in
derived class and private attribute is not accessible. 

private - all attributes in base class cannot be accessed by the derived class.

protected - public,protected attributes become protected and can be 
accessed in the derived class.
*/

class H{
    public:
    int x=20;
    protected:
    int y=30;
    private:
    int z=40;

};

class S: private H{
    public:
    void display()
    {
        cout<<x+y<<endl;
    }
    void voice()
    {
        cout<<"Worked!!";
    }

};
int main ()
{
    S c2;
    c2.display();
    c2.voice();
}