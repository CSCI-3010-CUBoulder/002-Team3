#include <iostream>
// takes an int, n, and returns the factorial of that int (n!)
int Factorial(int n){
  int factorial=1;
  if(n>=0){
    for(int i=n;i>1;i--){
      factorial=factorial*i;
    }
  }
  else{
    factorial=-1;
  }
  return factorial;
}

// int main(){
//   std::cout<<Factorial(4)<<std::endl;
//   std::cout<<Factorial(1)<<std::endl;
//   std::cout<<Factorial(0)<<std::endl;
//   std::cout<<Factorial(-3)<<std::endl;
// }
