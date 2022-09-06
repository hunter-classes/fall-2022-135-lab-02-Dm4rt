#include <iostream>

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
