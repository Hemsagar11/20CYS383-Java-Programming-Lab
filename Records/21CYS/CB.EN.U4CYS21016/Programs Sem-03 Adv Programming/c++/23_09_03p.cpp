#include <iostream>
using namespace std;
class triangle
{
    private:
    int l;
    int b;
    float area(){
        return (0.5*l*b);
    }
    public:
    void read(int a1, int a2){
        l=a1;
        b=a2;
    }
   
    void display();
};
void triangle::display()
{
    cout<<area()<<endl;
}
int main()
{
    int i,a,b;
    triangle t[2];
    for (i=0; i<2; i++){
        cin>>a;
        cin>>b;
        t[i].read(a,b);  
        t[i].display();
    }
}