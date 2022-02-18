//2B PROBLEM HANDLING DIVIDE BY ZERO ERROR

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the Numerator:";
    cin>>a;
    cout<<"Enter the Denominator:";
    cin>>b;
     try
    {
        
        if(b==0)
        {
            throw b;
            
        }
        else
        {
            c=a/b;
            cout<<"Answer after dividing is:"<<c<<endl;
        }
        
    }
    catch(int b)
    {
        cout<<"Division by zero error !"<<endl;
        
    }
   
    return 0;
    
    
}
