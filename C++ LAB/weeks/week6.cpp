operator overloading general cpp code:

#include<iostream>
using namespace std;
class Test
{
    public:
	int a; 
	void get()
	{
		cin>>a;	}
	int operator +(Test t2) 
	{   
	    
		return a+t2.a;
	}
	int operator -(Test t2) 
	{   
	    
		return a-t2.a;
	}
	int operator *(Test t2) 
	{   
	    
		return a*t2.a;
	}
	int operator /(Test t2) 
	{   
	    
		return a/t2.a;
	}
	int operator %(Test t2) 
	{   
	    
		return a%t2.a;
	}
};
int main()
{
Test t1,t2;
cout<<"enter the value for t1:";
t1.get();
cout<<"enter the value for t2:";
t2.get();
cout<<"Sum is:"<<t1+t2<<endl;
cout<<"Difference is:"<<t1-t2<<endl;
cout<<"Product is:"<<t1*t2<<endl;
cout<<"Division is:"<<t1/t2<<endl;
cout<<"Modulus is:"<<t1%t2<<endl;
return 0;
}


--------------------------------------------------------
  
  2nd:- Menudriven overloading program cpp
  
  #include <iostream>
using namespace std;
class Test
{
    public:
	int a; 
	void get()
	{
		cin>>a;	
	    
	}
	int operator +(Test t2) 
	{   
	    
		return a+t2.a;
	}
	int operator -(Test t2) 
	{   
	    
		return a-t2.a;
	}
	int operator *(Test t2) 
	{   
	    
		return a*t2.a;
	}
	int operator /(Test t2) 
	{   
	    
		return a/t2.a;
	}
	int operator %(Test t2) 
	{   
	    
		return a%t2.a;
	}
};
int main()
{   
    Test t1,t2;
    
    int n;
    while(1)
    {
        cout<<"Welcome to Ajay menu driven program"<<endl;
        cout<<"1)To add\n2)To subtract\n3)To multiply\n4)To divide\n5)To find mod\n6)To Exit"<<endl;
        cin>>n;
        switch (n)
        {
            case 1:
             {
                 cout<<"enter the value for t1:";
    t1.get();
    cout<<"enter the value for t2:";
    t2.get();
               
               cout<<"Sum is:"<<t1+t2<<endl; 
               break;
             }
             case 2:
             {
                 cout<<"enter the value for t1:";
    t1.get();
    cout<<"enter the value for t2:";
    t2.get();
                 cout<<"difference is:"<<t1-t2<<endl;  
                 break;
             }
             case 3:
             {
                 cout<<"enter the value for t1:";
    t1.get();
    cout<<"enter the value for t2:";
    t2.get();
                 cout<<"product is:"<<t1*t2<<endl;
                 break;
             }
             case 4:
             {
                 cout<<"enter the value for t1:";
    t1.get();
    cout<<"enter the value for t2:";
    t2.get();
                 cout<<"division is:"<<t1/t2<<endl;  
                 break;
             }
             case 5:
             {
                cout<<"enter the value for t1:";
    t1.get();
    cout<<"enter the value for t2:";
    t2.get();
                 cout<<"mod is:"<<t1%t2<<endl;  
                 break;
             }
             case 6:
             {
                 exit(0);
                 break;
             }
        }
    }
    return 0;
}
