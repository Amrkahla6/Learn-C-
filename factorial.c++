#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int factoria(int n){
    if(n == 0){
        return 1;
    }else{
        return factoria(n-1) * n;
    }
}

int Ifactrial(int n){
    int s = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        s = s * i;
    }
    return s;
    
}

int main()
{   
    int f;
    f = Ifactrial(5);
    cout<<f<<endl;
    return 0;
}