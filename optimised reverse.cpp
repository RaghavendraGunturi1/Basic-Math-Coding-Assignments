#include <iostream>
//reverseNumber function definition
int reverseNumber(int num){
    int reversed=0;
    while(num!=0){
        int digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
    return reversed;
}
// main function
int main(){
    int number;
    std::cout<<"Enter a number: ";
    std::cin>>number;
    int reversedNumber=reverseNumber(number);
    std::cout<<"Reversed Number: "<<reversedNumber<<std::endl;

    return 0;
}