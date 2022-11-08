#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

template <class T>
class Arthimatic{
    private: 
    T a;
    T b;

 public:
 Arthimatic(T a, T b);
 T add();
 T sub();

};

    template <class T>
    Arthimatic<T>::Arthimatic(T a, T b){
        this->a = a;
        this->b = b;
    }

    template <class T>
    T Arthimatic<T>::add(){
        T c;
        c = a + b;
         return c;
    }
    
    template <class T>
    T Arthimatic<T>::sub(){
        T c;
        c =  a - b;
        return c;
    }



int main()
{   
    Arthimatic<int> ar(20,10);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;
    return 0;
}

