#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int i,j,a,b,r,c,k;
    
    int array[2][2];
    int ar[2][2];
    int sum[2][2];
    //input 1
    cout<<"enter elements of array: "<<endl;

   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>array[i][j];
            
        }
        
    }
    
    //input 2
    cout<<"enter elements of second array: "<<endl;

   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>ar[i][j];
            
        }
        
    }
    
    //operation
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            sum[i][j]=0;
            sum[i][j]=array[i][j]+ar[i][j];
            
            
            
        }
       
    }
    
    //output
     cout<<"displaying the array"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<sum[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
       
    
    return 0;
}
/destructor
#include<iostream>
using namespace std;
int count=0;
class Student
{
    public: 
    Student()
    {
        count++;
        cout<<"Number of objects created: "<<count<<endl;
    }
    ~Student()
    {
        count--;
        cout<<"No. of objects destroyed: "<<count+1<<endl;
    }
};

int main()
{
    Student aa,bb,cc;
    {
        Student dd;
    }
}

/*
Number of objects created: 1
Number of objects created: 2
Number of objects created: 3
Number of objects created: 4
No. of objects destroyed: 4
No. of objects destroyed: 3
No. of objects destroyed: 2
No. of objects destroyed: 1
*/