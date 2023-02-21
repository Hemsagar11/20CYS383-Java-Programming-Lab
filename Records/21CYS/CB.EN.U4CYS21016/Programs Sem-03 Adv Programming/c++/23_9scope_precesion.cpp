/* scope resolution operator can be used to access/define a
member function outside the class but given the prototype of 
function in specified in the class

operator is ::
*/
#include <iostream>
using namespace std;
class triangle
{
    private:
    int length;
    int breadth;
    float area()
    {
        return (0.5*length*breadth);
    }
    public:
    void read()
    {
        cin>>length>>breadth;
    }
    void display(int i);
    
};
void triangle::display(int i)
{
    cout<<"Area of triangle "<<i+1<<" = "<<area()<<endl;
}
int main()
{
    triangle t[2];
    for(int i=0;i<2;i++)
    {
        t[i].read();
        t[i].display(i);// CALLING A PRIVATE FUNCTION USING PUBLIC FUNCTION
}
}