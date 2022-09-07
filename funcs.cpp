#include <iostream>
#include "funcs.h"

/*
Author: Daniel Martinez
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1B

This function takes two integers, the lower and upper varible (L and U).
A for loop prints the variable i, which starts as the value of L and is
added by 1 with every print until it reaches the value U, in which case
the condition fails and the function ends
*/
void print_interval(int L, int U){
  for(int i=L;i<U;i++){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
}
