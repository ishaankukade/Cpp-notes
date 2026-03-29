//Ishaan kukade
//23070123062
#include <iostream>
using namespace std;
class Constructor
{
    int a,b;
    public:
    Constructor()
    {
        a=30;
        b=20;
    }
    void putdata()
    {
        cout<<"a= "<<a<<endl<<"b= "<<b;
    }
};
int main()
{
    Constructor c;
    c.putdata();
    return 0;
}
/* OUTPUT
a= 30
b= 20
*/
