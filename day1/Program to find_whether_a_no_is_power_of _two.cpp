//question 2: Program to find whether a number is power of 2 or not.


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countbit( int n){
    int count=0;

    while(n!=0){
        bool x = n &1  ;
        if (x == 1){
            count++;  
        }
         n=n>>1;
    } 
    return count;
}

int main(){


    int n ;
    cout << "Entre a mumber: ";
    cin >> n;
    int y=countbit(n);

    if (y == 1){
        cout<<"the number "<<n<< "is power of 2 "<<endl;
    } 
    else {
        cout<<"The given number "<< n << " is not power of 2 "<<endl;
    }
   
  
}
