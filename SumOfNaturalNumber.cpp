#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int sum(int n){
   if(n == 0){
    return 0;
   }else{
    return sum(n-1)+n;
   }
};

int Isum(int n){
    int s = 0;
    int i;
    for(i=1; i<= n; i++){
        s = s+i;
    }
    return s;
};

int main()
{   
    //out 28
    int r;
    r = sum(5);
    cout<< r <<endl;
    return 0;
}