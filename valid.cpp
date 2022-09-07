#include <iostream>

/*
Author: Daniel Martinez
Course: CSCI-135
Instructor: Maryash
Assignment: Lab2A 

This program takes a number and stores it in the variable inputNum.
If the inputted number is not between 0 and 100, and loop occurs where
the user is repeatedly asked to input a number until it meets these
conditions. Then, the variable numSquared stores inputNum times inputNum
and it's this variable that gets pritned.
*/

int main(){
  int inputNum,numSquared;
  std::cout<<"Please enter an integer: ";
  std::cin>>inputNum;
  if(inputNum>=100||inputNum<=0){
    while(inputNum<=0||inputNum>=100){
      std::cout<<"Please re-enter: ";
      std::cin>>inputNum;
    }
  }
  numSquared=inputNum*inputNum;
  std::cout<<"\nNumber squared is "<<numSquared<<std::endl;
  return 0;
}
