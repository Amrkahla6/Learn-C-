#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Arthimatic{
    private: 
    int a;
    int b;
 public:
    Arthimatic(int a, int b){
        this->a = a;
        this->b = b;
    }

    int add(){
        int c;
        c = a + b;
         return c;
    }

    int sub(){
        int c;
        c =  a - b;
        return c;
    }

};

int main()
{   
    Arthimatic ar(20,10);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;
    return 0;
}

