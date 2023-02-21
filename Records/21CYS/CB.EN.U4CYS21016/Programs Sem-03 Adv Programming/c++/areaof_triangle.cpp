#include <iostream>
using namespace std;
class triangle
{
    private:
    int length;
    int breadth;
    public:
    void read()
    {
        cin>>length>>breadth;
    }
    void area(int i)
    {
        cout<<"Area of triangle "<<i+1<<" = "<<0.5*length*breadth<<endl;
    }
};
int main()
{
    triangle t[10];
    for(int i=0;i<10;i++)
    {
        t[i].read();//For 10 triangles, for 1 triangle just remove for loop and array of classes.
        t[i].area(i);
}