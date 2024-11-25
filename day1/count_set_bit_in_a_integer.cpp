//question 1: Count the number of set bits in a number.
//

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countbit(int n){
    int count= 0;
    while(n != 0){
        bool x =n &1 ;
        if (x==1){
            count++;
        }
        n=n>>1;
    }
    return count; 
}

int main(){


    int n;
    cout<<"Entre the number: ";
    cin>>n;
    cout<< countbit(n)<<endl;
    return 0;

}