#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int powerV1(int m, int n){
    if(n == 0){
        return 1;
    }else{
        return powerV1(m,n-1)*m;
    }
}

int powerV2(int m,int n)
{
 if(n==0)
    return 1;
 if(n%2==0)
    return powerV2(m*m,n/2);
 return m * powerV2(m*m,(n-1)/2);
}

int main()
{   
    int p;
    p = powerV2(2,4);
    cout<<p<<endl;
    return 0;
}