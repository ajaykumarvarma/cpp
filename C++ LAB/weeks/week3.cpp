@@1b answer @@

#include<iostream>
using namespace std;
class movie
{
    public:
         int age;
         int count;
        static int max_seats;
        
    movie() 
    {   
        
        for(count=0;count<max_seats;count++)
        {
         cout<<"Enter your age:";
         cin>>age;
         if(age<18)
         {
           cout<<"Below 18 are Restricted"<<endl;
           count=count-1;
          
         }
         else if (age>=18)
         {   
            cout<<"You are eligible!"<<endl;
            cout<<"Current seat status:"<<count+1<<endl; 
            cout<<"No of seats remaining:"<<max_seats-count-1<<endl;
            
         }
         
        
        } 
        if(count>=max_seats)
        {   
          cout<<"Your entry rejected reason:-House full!";
        
        }
        
        
    }
}; 
int movie::max_seats=100;

int main()
{
  movie a;
  return 0;
}


----------------------------------------------------------
  
  /* creating student class data members read(),display() program to read and display atleast 5 people details */

#include<iostream>
using namespace std;
class person
{
    char name[100];
    int Rollno;
    public:
      void read();
      void display();
};
void person::read()
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter Roll no:";
    cin>>Rollno;
    
}
void person::display()
{
    cout<<"Name is:"<< name<<endl;
    cout<<"Roll no is:"<<this->Rollno<<endl;
}    
int main()
{    
    
    
    person p1,p2,p3,p4,p5;
    cout<<"Enter the candidate details:"<<endl;
    p1.read();
    p2.read();
    p3.read();
    p4.read();
    p5.read();
    cout<<"Candi;date details are:"<<endl;
    cout<<"Student 1 details are:"<<endl;
    p1.display();
    cout<<"Student 2 details are:"<<endl;
    p2.display();
    cout<<"Student 3 details are:"<<endl;
    p3.display();
    cout<<"Student 4 details are:"<<endl;
    p4.display();
    cout<<"Student 5 details are:"<<endl;
    p5.display();
   
return 0;    
}

-----------------------------------------------------
  absolute difference 
  
  #include<iostream>
#include<cstdlib>
using namespace std;
class test2;
class test1

{
    int a;
    public:
    test1(int i)
    {
        a=i;
    }
     friend int absdif(test1,test2);
     
};
class test2

{
    int b;
    public:
    test2(int j)
    {
        b=j;
    }
     friend int absdif(test1,test2);
     
};
int absdif(test1 t1,test2 t2)
{
    return abs(t1.a-t2.b);
}

int main()
{
    int a,b;
    cout<<"Enter 2 values:"<<endl;
    cin>>a>>b;
    

    test1 t1(a);
    test2 t2(b);
    cout<<"Absolue difference is:"<<absdif(t1,t2)<<endl;
    return 0;
}

-----------------------------------------
  
  /* create a test class which gets initiated by the constrctor and displays the values with the help of frnd functions the name of frnd function is display */

#include<iostream>
using namespace std;
class test

{
    int a;
    public:
     test(int i){
         a=i;
     }
     friend int display(test x);
};
int display(test x)
{
    return x.a;
}
int main()
{
    
    int inp;
    cout<<"Enter a number:";
    cin>>inp;
    
    
    test t(inp);
    cout<<"Entered number is:"<<display(t);
    return 0;
}
