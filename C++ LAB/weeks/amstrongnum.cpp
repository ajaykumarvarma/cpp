week 1

program1: amstrong number
 
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i,r;
    
    cout<<"Enter a number:";
    cin>>n;
    i=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
        
    }
if (sum==i)
 {
    cout<<"It is an amstrong number";
 }
else
 {
    cout<<"It is not amstrong number";
 }
return 0;
}