all:	main
main:	a+b.cpp
	g++ -std=c++11 -pthread a+b.cpp -o main