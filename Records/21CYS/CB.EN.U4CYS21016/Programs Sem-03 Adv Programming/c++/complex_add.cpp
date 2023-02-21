#include <iostream>
using namespace std;
class complex{
    public:
    float rl;
    float img;
    public:   
    void sum(complex c) //Using this pointer.
    {
        cout<<"Sum of complex numbers is: ";
        cout<<this->rl+c.rl<<" + i"<<this->img+c.img;
    }
};
int main()
{
    complex C[2];
    for (int i=0;i<2;i++)
    {
        cout<<"Enter the real and imaginary part of complex number "<<i+1<<":"<<endl;
        cin>>C[i].rl>>C[i].img;
        
    }
    cout<<endl<<"Sum of real parts is : "<<C[0].rl+C[1].rl;
    cout<<endl<<"Sum of imaginary parts is : "<<C[0].img+C[1].img;
    cout<<endl;
    C[0].sum(C[1]);
    
    
}
