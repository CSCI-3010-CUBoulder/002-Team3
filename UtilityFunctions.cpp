#include "UtilityFunctions.h"

//If the input is positive or 0 it returns true
bool IsPositive(const int &a){
	if{ a >= 0 ){
		return true;
	}
	else{
		return false;
	}
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

