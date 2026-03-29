//Ishaan kukade
//23070123062
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    string branch;
    int year;
    void obj1();
};
void Student::obj1()
{
    cout<<"I am in second year";
}
int main()
{
   
    
    Student s1;
    
    s1.name="ishaan";
    s1.age=19;
    s1.branch="ENTC";
    s1.year=2;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.year<<endl;
    s1.obj1();
    cout<<endl;
}
/* OUTPUT
ishaan
19
ENTC
2
I am in second year
*/
    
     
    