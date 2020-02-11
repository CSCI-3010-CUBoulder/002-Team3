CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!


all: main

main: UtilityFunctions.o
	$(CXX) $(CXXFLAGS) -o main UtilityFunctions.o

main.o: UtilityFunctions.cpp UtilityFunctions.h
	$(CXX) $(CXXFLAGS) -c UtilityFunctions.cpp


clean: 
	rm main *.o