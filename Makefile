all: test

test: func.o main.o
	g++ -o test -Wall $^

main.o: main.cpp
	g++ main.cpp -c   

func.cpp: func.cpp
	g++ func.cpp -c

clean: 
	rm -v *.o test
