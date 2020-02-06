#include "UtilityFunctions.h"

int dummyFunction(int input) {
	return input + 5;
}

//If the input is positive or 0 it returns true
bool IsPositive(const int &a){
	if{ a >= 0 ){
		return true;
	}
	else{
		return false;
	}
}
