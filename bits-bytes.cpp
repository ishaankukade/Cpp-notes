#include<iostream>
#include<string>

using namespace std;
int main()
{
    int myintvar;
    float myfloatvar;
    bool myboolvar;
    char mycharvar;
    double mydoublevar;
    
    

    
    cout<<"Enter integer value"<<sizeof(myintvar)<<"bytes"<<endl;
    cin>>myintvar;
    cout<<"Enter float value "<<sizeof(myfloatvar)<<"bytes"<<endl;
    cin>>myfloatvar;
    cout<<"Enter boolean value"<<sizeof(myboolvar)<<"bytes"<<endl;
    cin>>myboolvar;
    cout<<"Enter character"<<sizeof(mycharvar)<<"bytes"<<endl;
    cin>>mycharvar;
    cout<<"Enter double value"<<sizeof(mydoublevar)<<"bytes"<<endl;
    cin>>mydoublevar;
    
    
}