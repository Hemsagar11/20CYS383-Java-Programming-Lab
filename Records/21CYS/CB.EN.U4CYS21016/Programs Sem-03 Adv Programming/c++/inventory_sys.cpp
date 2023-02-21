#include <iostream>
#include <string>
using namespace std;
class inventory{
    string name,item_id;
    int price;
    int stock;
    int reorder_point;
    int minimum_order;
    int order_amount;
    
    public:
        inventory(string name,string Id,int p,int s,int rp,int min_o){
            this->name=name;
            item_id=Id;
            price=p;
            stock=s;
            reorder_point=rp;
            minimum_order=min_o;
        }
        void display(){
            cout<<price;
        }
};
int main()
{
    int n,p,s,rp,min_o;
    string name,Id;
    cin>>n;
    inventory* I[] = (inventory *) malloc (sizeof(inventory)*n);
    for(int k=0;k<n;k++){
        cin>>name;
        cin>>Id;
        cin>>p;
        cin>>s;
        cin>>rp;
        cin>>min_o;
        I[k]=inventory(name,Id,p,s,rp,min_o);
    }
    
}