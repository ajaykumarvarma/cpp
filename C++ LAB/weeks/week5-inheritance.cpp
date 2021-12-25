1st program

#include<iostream>
using namespace std;
class A
{
    public:
       int a,b;
       void setdata(int x,int y)
       {
            a=x;
            b=y;
       }
};
class B:public A
{
    public:
       int c;
       void setdata1(int z)
       {
           c=z;
       }
    void display()
   {
        cout<<"A value is:"<<a<<"\nB value is:"<<b<<"\nC value is:"<<c;
    
    
    }
};

int main()
{
    B obj;
    int a,b,c;
    cout<<"Enter Values of x and y:";
    cin>>a>>b;
    cout<<"Enter the value of z:";
    cin>>c;
    obj.setdata(a,b);
    
    obj.setdata1(c);
    obj.display();
    return 0;
    
    
}


2nd:- 
  
  #include<iostream>
using namespace std;
#include<stdio.h>
class Q 
{
    public:
    int q;
    Q()
    {
      q=1;  
    }
    void display1()
    {
        cout<<"The q Value :"<<q<<endl;
    }
};
class R:public Q 
{
    public:
    int r;
    R()
    {
       r=2; 
    }
    void display2()
    {
        cout<<"The r Value:"<<r<<endl;
    }
};
class S:public R 
{
    public:
    int s;
    S()
    {
        s=3;
    }
    void display3()
    {
        cout<<"The s Value:"<<s<<endl;
    }
};
int main()
{
    S obj;
    obj.display1();
    obj.display3();
    obj.display2();
    return 0;
}


3rd:- 
  
  #include<iostream>
using namespace std;
class person
{   public:
    char *fname;
    char *lname;
    void show1(char* a,char* b)
    {
        fname=a;
        lname=b;
    }
};
class employe:public person
{
    public:
    int eno;
    float esal;
    char* edept;
    void show2(int a,float b,char* c)
    {
        eno=a;
        esal=b;
        edept=c;
    }
    void display()
    {
        cout<<"Employee First Name Is:"<<fname<<endl;
        cout<<"Employee Last Name Is:"<<lname<<endl;
        cout<<"Employee Number Is:"<<eno<<endl;
        cout<<"Employee Working Department is:"<<edept<<endl;
        cout<<"Employee Salary Is:"<<esal<<endl;
    }
};
int main()
{   
    employe e;
    char fname[10];
    char lname[10];
    char edept[10];
    int eno;
    float esal;
    cout<<"enter your name:";
    cin>>fname>>lname;
    e.show1(fname,lname);
    cout<<"Enter your Eno,Edept and Esal:"<<endl;
    cin>>eno>>edept>>esal;
    e.show2(eno,esal,edept);
    e.display();
    return 0;
}


4rth:- 
  
  #include<iostream>
using namespace std;
class person
{   public:
    char *fname;
    char *lname;
    void show1(char* a,char* b)
    {
        fname=a;
        lname=b;
    }
};
class employe:public person
{
    public:
    int eno;
    float esal;
    char* edept;
    void show2(int a,float b,char* c)
    {
        eno=a;
        esal=b;
        edept=c;
    }
    
};
class department:public employe
{
    public:
    char* dname;
    int dno;
    int experience;
    
    
    void show3(int a,char* b,int c)
    {
        dno=a;
        dname=b;
        experience=c;
    }
    void display()
    {
        cout<<"Employee First Name Is:"<<fname<<endl;
        cout<<"Employee Last Name Is:"<<lname<<endl;
        cout<<"Employee Number Is:"<<eno<<endl;
        cout<<"Employee Working Department is:"<<edept<<endl;
        cout<<"Employee Salary Is:"<<esal<<endl;
        cout<<"Employee Department No is:"<<dno<<endl;
        cout<<"Employee Department name is:"<<dname<<endl;
        cout<<"Employee Working Experience is:"<<experience<<endl;
    }
};
int main()
{   
    department d;
    char fname[10];
    char lname[10];
    char edept[10];
    int eno;
    float esal;
    int dno,dexp;
    char dname[15];
    cout<<"enter your name:";
    cin>>fname>>lname;
    d.show1(fname,lname);
    cout<<"Enter your Eno,Edept and Esal:"<<endl;
    cin>>eno>>edept>>esal;
    d.show2(eno,esal,edept);
    cout<<"Enter ur department details:"<<endl;
    cout<<"Enter ur dep no,dep name and year exp of u in dep:"<<endl;
    cin>>dno>>dname>>dexp;
    d.show3(dno,dname,dexp);
    d.display();
    return 0;
}


5th to 8th here:-
  https://docs.google.com/document/d/AcLSFNivGXo5DnoPqAdVxHB7qQrUvxjgXxmrGhEFH6v4/edit
