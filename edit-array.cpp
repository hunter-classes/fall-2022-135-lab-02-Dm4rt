#include <iostream>

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

