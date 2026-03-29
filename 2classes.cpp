//Ishaan kukade
//23070123062
#include <iostream>
using namespace std;

class student{
    public:
    
    string name;
    int age;
    string branch;
    int year;
    void obj1()
    {
        cout<<"I am in second year";
    }
    
    
    
};
class stud{
    public:
    string name;
    int age;
    string branch;
    int year;
    void obj2()
    {
        cout<<"I am in second year";
    }
    
};
int main() {
    
    student s1;
    
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
    
    stud a;
    a.name="jatin";
    a.age=18;
    a.branch="ENTC";
    a.year=2;
    cout<<a.name<<endl;
    cout<<a.age<<endl;
    cout<<a.branch<<endl;
    cout<<a.year<<endl;
    a.obj2();
    
    return 0;
}
/*OUTPUT
ishaan
19
ENTC
2
I am in second year
jatin
18
ENTC
2
I am in second year
*/
    
     
    