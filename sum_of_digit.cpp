#include <iostream>
using namespace std ;



int summation(int n){
    int sum=0;

    while(n!=0){
        int rem= n%10;
        sum =sum + rem;
        int x =n/10;
        n=x;
    }
    return sum;

}

int main(){
  cout<<"Entre a number"<<endl;
  int n;
  cin >> n ;
  cout<<summation(n)<<endl;

}
