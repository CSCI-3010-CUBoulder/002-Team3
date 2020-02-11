#include "UtilityFunctions.h"
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


std::string Join(std::vector<std::string> pieces, std::string glue) {
	std::string result = "";
	for ( int i = 0; i < pieces.size()-1; i++ ) {
		result += pieces[i];
		result += glue;
	}
	result += pieces[pieces.size()-1];
	return result;
}


//If the input is positive or 0 it returns true
bool IsPositive(const int &a){
	if( a >= 0 ){
		return true;
	}
	else{
		return false;
	}
}


int Sign(int num)
{
    if(num == -num){
        return -1;
    }
    else{
        return 1;
    }

};

