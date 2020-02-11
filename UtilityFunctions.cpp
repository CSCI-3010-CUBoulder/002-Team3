#include "UtilityFunctions.h"

std::string Join(std::vector<std::string> pieces, std::string glue) {
	std::string result = "";
	for ( int i = 0; i < pieces.size()-1; i++ ) {
		result += pieces[i];
		result += glue;
	}
	result += pieces[pieces.size()-1];
	return result;
}

int Sign(int num)
{
    if(num = -num){
        return -1;
    }
    else{
        return 1;
    }

};