//Ishaan kukade
//23070123062
#include <iostream>
using namespace std;
class Shape
{
    public:
    int l,b,h,vol;

    void calc();
    void input();
    void out();
};
void Shape::input()
{
    cout<<"enter value of length: ";
    cin>>l;
    cout<<"enter value of breadth: ";
    cin>>b;
    cout<<"enter value of height: ";
    cin>>h;
}
void Shape::calc()
{
    vol=l*b*h;
}
void Shape::out()
{
    
    cout<<"volume of the cuboid is:"<<vol;
}
int main()
{
    Shape s1;
    s1.input();
    s1.calc();
    s1.out();
    return 0;
}
/* OUTPUT
enter value of length: 3
enter value of breadth: 4
enter value of height: 3
volume of the cuboid is:36
*/
    