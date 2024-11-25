// question 3 :multiply the number

#include <iostream>
using namespace std ;



int multiply(int n){
    int mul=1;

    while(n!=0){
        int rem= n%10;
        mul =mul * rem;
        int x =n/10;
        n=x;
    }
    return mul;

}

int main(){
  cout<<"Entre a number"<<endl;
  int n;
  cin >> n ;
  cout<<multiply(n)<<endl;

}
