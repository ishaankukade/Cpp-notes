


/* Conditional

largest
#include<iostream>
#include<string>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a,b,c";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is the greatest";
    }
    else if(b>c&&b>a)
    {
        cout<<"b is the greatest";
    }
    else if(c>a&&c>b)
    {
        cout<<"c is the greatest";
    }
}


odd or even

#include<iostream>
#include<string>

using namespace std;
int main()
{
    int n;
    cout<<"write the value of n: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<"number is even";
    }
    else
    {
        cout<<"number is odd";
    }
}

quadrant

#include<iostream>
#include<string>

using namespace std;
int main()
{
int x,y;
cout<<"enter coordinates";
cin>>x>>y;
if(x>0 and y>0)
{
    cout<<"it is in first quadrant";
}
else if(x>0 and y<0)
{
    cout<<"it is in second quadrant";
}
else if(x<0 and y<0)
{
    cout<<"it is in third quadrant";
}
else if(x<0 and y>0)
{
    cout<<"it is in fourth quadrant";
}
else
{
    cout<<"it is on origin";
}

}


switch case

#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"MENU: "<<endl;
    cout<<"1. Monday"<<endl;
    cout<<"2. Tuesday"<<endl;
    cout<<"3. Wednesday"<<endl;
    cout<<"4. Thursday"<<endl;
    cout<<"5. Friday"<<endl;
    cout<<"6. Saturday"<<endl;
    cout<<"7. Sunday"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Monday"<<endl;
            break;
        }
        case 2: 
        {
            cout<<"Tuesday"<<endl;
            break;
        }
        case 3: 
        {
            cout<<"Wednesday"<<endl;
            break;
        }
        case 4: 
        {
            cout<<"Thursday"<<endl;
            break;
        }
        case 5: 
        {
            cout<<"Friday"<<endl;
            break;
        }
        case 6:
        {
            cout<<"Saturday"<<endl;
            break;
        }
        case 7:
        {
            cout<<"Sunday"<<endl;
            break;
        }
    }
}
/*MENU: 
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
4
Thursday


vowel
#include<iostream>
#include<string>

using namespace std;
int main()
{
    int n,a,e,i,o,u,A,E,I,O,U;
    cout<<"value of character: ";
    cin>>n;
    if(n==a||n==e||n==i||n==o||n==u||n==A||n==E||n==I||n==O||n==U)
    {
        cout<<"character is a vowel";
    }
  

    else
    {
        cout<<"character is a consonant"<<endl;
    }
}












*/


























