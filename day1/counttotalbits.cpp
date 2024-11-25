#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int countbit(int n){
    int count =0;
    while (n!=0){
        bool x =n & 1;
        if (x==1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int totalcount(int n){
    int c=0;
    for (int i=1;i<=n;i++){
        c += countbit(i);
    }
    return c;
}

int main(){

    cout<<"Entre a number: ";
    int n;
    cin>>n;
    cout<<totalcount(n)<<endl;



}