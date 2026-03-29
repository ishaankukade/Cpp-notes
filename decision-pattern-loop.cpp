


/* 1st pattern

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter your choice: ";
    cin>>n;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

Enter your choice: 5
* 
* * 
* * * 
* * * * 
* * * * * 

second pattern

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter your choice: ";
    cin>>n;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


Enter your choice: 5
* * * * * 
* * * * 
* * * 
* * 
* 

third pattern
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter your choice: ";
    cin>>n;
    k=n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=k)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        k--;
        cout<<"\n";
    }
}


Enter your choice: 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

fourth pattern     SIT 5 times
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        cout<<"SIT"<<endl;
    }
}


fifth pattern
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==3||i==5)
        {
            continue;
           
        }
        cout<<i<<endl;
    }
}















*/


























