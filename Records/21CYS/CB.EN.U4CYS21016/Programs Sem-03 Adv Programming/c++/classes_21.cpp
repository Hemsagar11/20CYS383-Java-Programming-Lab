//Classes and encapsulation
#include <iostream>
using namespace std;
class student{
    private:
    int mark;
    public:
    void func(int m)
{
    int mark=m;
    cout<<mark;
}
    // private attributes can be accessed using member functions.
    // such as func() used here.
};

int  main ()
{
    student s,t;
    s.func(10);
    cout<<endl;
    t.func(20);
}

//This - Pointer is used to differentiatie the actuall attribute
// and the local varible of the function
// example:
/*
void func(int mark)
{
    int mark=mark; as here two mark is used where
                    one is attribute other is local variable.
    cout<<mark;
}
this can changed as
void func(int mark)
{
    this->mark=mark;
    cout<<this->mark;
}
*/
