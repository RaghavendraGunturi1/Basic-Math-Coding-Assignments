#include <iostream>

int main(){
    //declare variables
    int num,reversed=0;
    //ask for input
    std::cout<<"Enter an integer: ";  
    //take input
    std::cin>>num;  

    //reverse of number using while loop
    while(num!=0){
        int digit=num%10;  
        reversed=reversed*10+digit;
        num/=10;
    }
    //print output
    std::cout<<"Reversed Number: "<<reversed<<std::endl;
    return 0;  
}