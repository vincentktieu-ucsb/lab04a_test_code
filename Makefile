CXX = g++

CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field

all: lab04Test01 lab04Test02 lab04Test03 lab04Test04 lab04Test05

tests: all
	./lab04Test01
	./lab04Test02
	./lab04Test03
	./lab04Test04
	./lab04Test05

lab04Test01: WordCount.o tddFuncs.o lab04Test01.o
	$(CXX) $(CXXFLAGS) $^ -o $@

lab04Test02: WordCount.o tddFuncs.o lab04Test02.o
	$(CXX) $(CXXFLAGS) $^ -o $@

lab04Test03: WordCount.o tddFuncs.o lab04Test03.o
	$(CXX) $(CXXFLAGS) $^ -o $@

lab04Test04: WordCount.o tddFuncs.o lab04Test04.o
	$(CXX) $(CXXFLAGS) $^ -o $@

lab04Test05: WordCount.o tddFuncs.o lab04Test05.o
	$(CXX) $^ $(CXXFLAGS) -o $@
