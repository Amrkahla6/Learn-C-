#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int rfibon(int n){
    if(n <= 1)
        return n;

    return rfibon(n-2) + rfibon(n-1);
}

int fibItration(int n){
    if (n <= 1)return n;
   
    int t0=0, t1=1, s=0, i;
    for(i=2; i<= n; i++){
        s = t0+t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}


int main()
{   
    cout<< fibItration(7) <<endl;
    return 0;
}