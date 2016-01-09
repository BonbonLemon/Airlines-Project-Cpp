simulator.out: city.o main.o plane.o citylist.o
	g++ -Wall -ansi -g -lm -o simulator.out city.o main.o plane.o citylist.o

city.o: city.cpp city.h 
	g++ -Wall -ansi -g -c city.cpp

main.o: main.cpp citylist.h 
	g++ -Wall -ansi -g -c main.cpp 

citylist.o: citylist.cpp citylist.h city.h
	g++ -Wall -ansi -g -c citylist.cpp
   
plane.o: plane.cpp plane.h
	g++ -Wall -ansi -g -c plane.cpp

clean:
	rm -f simulator.out city.o main.o plane.o citylist.o
