lab1test: lab_1_unit_test.o sorting.o
	g++ -Wall -g -o lab1 lab_1_unit_test.o sorting.o 

lab1: sorting.cpp
	g++ -Wall -g -c sorting.cpp

lab1_unit: lab_1_unit_test.cpp
	g++ -Wall -g -c lab_1_unit_test.cpp







	
