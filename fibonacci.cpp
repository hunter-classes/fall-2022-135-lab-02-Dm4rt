#include <iostream>

/*
Author: Daniel Martinez
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1D

This program simply prints every the first 60 fibonacci numbers. An array
of 60 is first created, and a fibonacci always starts with the values 0 and 1.
Give this a for loop that starts at index 2 goes on that adds the previous
two numbers (index-1 + index-2) and puts it in the current index. This repeats
until the index hits 60.
*/
int main(){
  int fib[60];
  fib[0]=0;
  fib[1]=1;
  std::cout<<fib[0]<<"\n"<<fib[1]<<"\n";
  for(int i=2;i<60;i++){
    fib[i]=fib[i-1]+fib[i-2];
    std::cout<<fib[i]<<"\n";
  }
  return 0;
}
