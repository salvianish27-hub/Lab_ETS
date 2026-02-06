#include<iostream>
using namespace std;
class calculator{
    int a=10;
    int b=20;
    public:
    int  add() // this is parameterless Function
    {
        return a+b;
    }
    int add(int a, int b)
    {
         return a+b;       

    }
    int add(int a, int b,int c)
    {
         return a+b+c;       

    }
     void add(int a, float b,float c,float d)
    {
        cout<<"The Output is: "<< a+b;       

    }

};


int main()
{
    calculator C1;
    cout<<"The output is: "<<C1.add()<<"\n";
    cout<<"The output is :"<<C1.add(1,2)<<"\n";
    cout<<"The output is :"<<C1.add(1,2,3)<<"\n";
    C1.add(1,0.3345,0.3456,0.1123);
  
    return 0;
}