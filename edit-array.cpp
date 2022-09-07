#include <iostream>

/*
Author: Daniel Martinez
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1C

This program creates an array with 10 values. A for loop first sets
all values in this array to 1. Then a user is asked for an index and a 
number to replace the existing number in that index. Following this, the
function printData is called to print the array. If the index is out of 
bounds, meaning below 0 and above 9, then the program ends
*/
int myData[10];

void printData(){
  for(int i=0;i<10;i++){
    std::cout<<myData[i]<<" ";
  }
  std::cout<<"\n";
  
}

int main(){
  int index,value;

  for(int i=0;i<10;i++){
    myData[i]=1;
  }
  
  std::cout<<"\n";
  printData();
  std::cout<<"\n";
  std::cout<<"Input index: ";
  std::cin>>index;
  std::cout<<"Input value: ";
  std::cin>>value;
  
  while(index>=0&&index<10){
    std::cout<<"\n";
    myData[index]=value;
    printData();
    std::cout<<"\n";
    std::cout<<"Input index: ";
    std::cin>>index;
    std::cout<<"Input value: ";
    std::cin>>value;
  }
  
  std::cout<<"\n"<<"Index out of range. Exit."<<std::endl;
  return 0;
}

