//Ishaan kukade
//23070123062
#include <iostream>
using namespace std;
class Constructor
{
  int a,b;
  public:
  Constructor(int m,int n)
  {
      a=m;
      b=n;
  }
  void display()
  {
      cout<<"a= "<<a<<endl<<"b= "<<b;
     
  }
  
};
int main() {
    Constructor Const(20,30);
    Const.display();
    

    return 0;
}
/* OUTPUT
a= 20
b= 30
*/