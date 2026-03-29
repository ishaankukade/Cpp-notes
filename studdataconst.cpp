//Ishaan Kukade
//23070123062
#include <iostream>
using namespace std;
class Student
{
    int rno;
    string name;
    string fee;
    public:
    Student();
    void display();
    
    
};
Student::Student()
{
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter roll number: ";
    cin>>rno;
    cout<<"enter fees status: ";
    cin>>fee;
}
void Student::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    
}
int main()
{
    Student stud;
    stud.display();
    return 0;
}
/*OUTPUT
enter name: ishaan
enter roll number: 62
enter fees status paid

62	ishaan	paid
*/