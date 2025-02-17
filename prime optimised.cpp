#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false; // Numbers less than or equal to 1 are not prime
    }
    if(n==2){
        return true; // 2 is the only even prime number
    }
    if(n%2==0){
        return false; // Even numbers greater than 2 are not prime
    }
    int limit=sqrt(n); // Check divisibility up to root of n
    for(int i=3;i<=limit;i+=2){
        if(n%i==0){
            return false;//n is divisible by i, not prime
        }
    }
    return true; // n is prime
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPrime(num)){
        cout<<num<<" is a prime number."<<endl;
    }else{
        cout<<num<<" is not a prime number."<< endl;
    }
    return 0;
}
