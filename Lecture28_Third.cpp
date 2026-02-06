#include<iostream>
using namespace std;
class calculator{
    int a=7;
    int b=8;
    public:
    int  mul() // this is parameterless mul Function
    {
        return a*b;
    }
    int mul(int a, int b) // Mml Function with two parameter
    {
         return a*b;       

    }
    int mul(int a, int b,int c) // Mml Function with three parameter
    {
         return a*b*c;       

    }
     void mul(int a, float b,float c,float d)// Mml Function with four parameter
    {
        cout<<"The Output is: "<< a*b*c*d;       

    }

};


int main()
{
    calculator C1;
    cout<<"The output of Multiplication for int mul() is: "<<C1.mul()<<"\n";
    cout<<"The output of Multiplication for int mul(int a, int b) is: "<<C1.mul(1,2)<<"\n";
    cout<<"The output of Multiplication for int int mul(int a, int b,int c) is: "<<C1.mul(1,2,3)<<"\n";
    C1.mul(1,0.3345,0.3456,0.1123);
    return 0;
}