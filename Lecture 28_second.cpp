#include<iostream>
using namespace std;
// Creating the parent class called 
class printIO{
    
    public:
    void  print() 
    {
        cout<<"This is PrintIO class";
    }

};

class students:public printIO{
    public:
    void  print() 
    {
        cout<<"This is for students Print"<<"\n";
    }
    };

class doctor:public printIO{  //Creating child class called doctor with same function print
    public:
    void  print() 
    {
        cout<<"This is for Doctor Print"<<"\n";
    }
    };

class Engineer:public printIO{ //Creating child class called Engineer with same function print
    public:
    void  print() 
    {
        cout<<"This is for Engineer Print"<<"\n";
    }
    };

int main()
{
    students M1;
    M1.print();
    doctor M2;
    M2.print(); //overriding print for doctor
    Engineer M3;
    M3.print();  //overriding print for Engineer
    return 0;
}