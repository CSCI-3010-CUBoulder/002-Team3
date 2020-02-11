#include "UtilityFunctions.h"

int main() {
	std::vector<std::string> pieces;
	pieces.push_back("hello");
	pieces.push_back("world");
	pieces.push_back("i");
	pieces.push_back("am");
	pieces.push_back("computer.");

	std::cout << Join(pieces, " ") << std::endl;
}