#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int myint;
    float myfloat;
    char mychar;
    double mydouble;
    string mystring;
    bool mybool;

    
    cout<<"Enter an integer:"<<endl;
    cin>>myint;
    cout<<"Enter a decimal number:"<<endl;
    cin>>myfloat;
    cout<<"Enter a letter:"<<endl;
    cin>>mychar;
    cout<<"Enter a large number:"<<endl;
    cin>>mydouble;
    cout<<"Enter your name:"<<endl;
    cin>>mystring;
    cout<<"Enter zero or one randomly:"<<endl;
    cin>>mybool;
    
    printf("VALUES OF ENTERED ASPECTS:\n");
    cout<<myint<<endl;
    cout<<"Size: "<<sizeof(myint)<<" bytes"<<endl;
    cout<<myfloat<<endl;
    cout<<"Size: "<<sizeof(myfloat)<<" bytes"<<endl;
    cout<<mychar<<endl;
    cout<<"Size: "<<sizeof(mychar)<<" bytes"<<endl;
    cout<<mydouble<<endl;
    cout<<"Size: "<<sizeof(mydouble)<<" bytes"<<endl;
    cout<<mystring<<endl;
    cout<<"Size: "<<sizeof(mystring)<<" bytes"<<endl;
    cout<<mybool<<endl;
    cout<<"Size: "<<sizeof(mybool)<<" bytes"<<endl;
}

/* OUTPUT

Enter an integer:
9
Enter a decimal number:
8.65
Enter a letter:
J
Enter a large number:
78654356
Enter your name:
JIYA
Enter zero or one randomly:
0
VALUES OF ENTERED ASPECTS:
9
Size: 4 bytes
8.65
Size: 4 bytes
J
Size: 1 bytes
7.86544e+07
Size: 8 bytes
JIYA
Size: 32 bytes
0
Size: 1 bytes
*/