all: target1 run 

target1:
	g++ .cpp -o main.o
	
run:
	g++ for_loop_4.cpp -o main
	./main	 	

create:
	echo > for_loop.cpp

clean:
	rm -f *.txt


#(in windowns use .bat file as Makefile)
