#include <iostream>
using namespace std;
struct student{
    int mark;
};
int main()
{
    student t;
    cin>>t.mark;
    cout<<t.mark;
}

//Classes and access specifiers
#include <iostream>
using namespace std;
class student{
    private: //as it is given private the attributes such as mark
            // cannot be accessed outside the class like in main func.
    int mark;
};
int  main ()
{
    student s;
    s.mark=10;
    cout<< s.mark;
}
/* default access specifier is private for class and to make
the attributes accessible access specifier can be changed to public.