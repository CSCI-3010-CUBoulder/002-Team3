CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!


all: main

main: main.o UtilityFunctions.o
	$(CXX) $(CXXFLAGS) -o main main.o UtilityFunctions.o
	
test: test.o UtilityFunctions.o
	$(CXX) $(CXXFLAGS) -o test test.o UtilityFunctions.o
	
test.o: test.cpp UtilityFunctions.h
	$(CXX) $(CXXFLAGS) -c test.cpp
	
UtilityFunctions.o: main.cpp UtilityFunctions.h
	$(CXX) $(CXXFLAGS) -c main.cpp

UtilityFunctions.o: UtilityFunctions.cpp UtilityFunctions.h

	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp


clean: 
	rm main *.o