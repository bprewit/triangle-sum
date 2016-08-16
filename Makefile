# build an executable named myprog from myprog.c
all: triangle-sum.cpp
	g++ -g -Wall -O0 -o triangle-sum triangle-sum.cpp

clean: 
	$(RM) triangle-sum
