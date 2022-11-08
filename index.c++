#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Rectangle{
    private:
    int lenght;
    int breadth;
    
    public:
    Rectangle(){
        lenght=0;
        breadth=0;
    }

    Rectangle(int l, int b){
        lenght  = l;
        breadth = b;
    }

    int area(){
       return  lenght * breadth;
    }

    int permiter(){
        return 2*(lenght+breadth);
    }

    void setLenght(int l){
        lenght =l;
    }
    
    void setBreadth(int b){
        breadth = b;
    }

    int getLenght(){
        return lenght;
    }

    int getBreadth(){
        return breadth;
    }
    ~Rectangle(){
        cout<<"Finish Class"<<endl;
    }

};

int main()
{   
    Rectangle r(10,20);
    cout<<r.area()<<endl;
     cout<<r.permiter()<<endl;
    return 0;
}

