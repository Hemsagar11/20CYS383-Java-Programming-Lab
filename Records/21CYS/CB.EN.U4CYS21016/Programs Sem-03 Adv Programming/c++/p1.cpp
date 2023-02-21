/*#include <iostream>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<"5 x "<<i<<" = "<<5*i;
        cout<<endl;
    }
}*/
#include <iostream>
#include <cctype>
#include <string>
//#include <cstring>
//#include <algorithm>
using namespace std;
int main(){
    int i,l;
    string name;
    getline (cin,name);
    l=name.length();
    for(i=0;i<l;i++){
        if(isupper(name[i])){
            name[i]=tolower(name[i]);
        }
        else{
            name[i]=toupper(name[i]);
        }
    }
    cout<<"The string after changing case of each character: \n";
    cout<<name;
    cout<<"\n";
    cout<<"The string after reversing each word and string: \n";
    //reverse(name.begin(),name.end());
    reverse(name.begin(),name.end());
    cout<<name<<"\n";
    /*for(i=(l-1);i>=0;i--){
        cout<<name[i];
    }*/
    
}