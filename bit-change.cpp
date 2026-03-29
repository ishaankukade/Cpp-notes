#include<iostream>
using namespace std;
int main()
{
    int bit_to_be_set, i=5;
    int bit_to_be_reset;
    int set, reset;
    cout<<"Enter the bit to be changed: "<<endl;
    cin>>bit_to_be_reset;
    set = i|(1<<bit_to_be_reset);
    // reset = i&(~(1<<bit_to_be_reset));
    cout<<"Set: "<<set<<endl;
}