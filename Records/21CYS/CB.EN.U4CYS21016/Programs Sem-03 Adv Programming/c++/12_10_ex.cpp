#include <iostream>
using namespace std;
class array_details{
    public:
    int a[10];
    void readarray()
    {
        cout<<"Enter the elements of the array"<<endl;
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }
    
};
class functions:public array_details
{
    public:
    void display()
    {
        for(int i=0;i<10;i++)
        {
            cout<<a[i];
        }
    }
    void sort()
    {
        int temp,min;
        for (int i = 0; i < 9; i++) 
        {
            min = i;
            for (int j = i + 1; j < 10; j++)
            if (a[j] < a[min])
            min = j;
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        /*for(int i=0;i<10;i++)
        {
            for(int j=i+1;j<10;j++)
            {
                if (a[i]>a[j])
                {
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
                else continue;
            }
        }*/
        for(int i=0;i<10;i++)
        {
            cout<<a[i]<<"  ";
        }
    }
    void sum()
    {
        int sum=0;
        for(int i=0;i<10;i++)
        {
            sum=sum+a[i];
        }
        cout<<"Sum of elements : "<<sum;

    }
    void largest()
    {

    }
    void smallest()
    {

    }
    void factorial()
    {

    }

};
int main()
{
    array_details A;
    functions B;
    B.readarray();
    cout<<endl;
    B.sort();
}