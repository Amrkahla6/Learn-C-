#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Sum{
    private:
    int a , b;
    public:
    Sum(int a, int b){
        this->a = a;
        this->b = b;
    }
     
     /**
      * Sum To Numbers
     */
     int add(){
        int c;
        c = a + b;
        return c;
     }
};

int main()
{   
    int a , b;
    cout<< "Enter First Number"<<endl;
    cin>>a;
    cout<< "Enter Second Number"<<endl;
     cin>>b;
    Sum s(a,b);
    cout<< s.add()<<endl;
    return 0;
}