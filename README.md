###Flight Simulator

Flight simulator is a C++ powered program usable in the terminal. The menu appears as follows:

Flight Simulator Menu
0. Done.
1. Determine distance and passengers between two airports.
2. Determine all traffic from one airport.
3. Display planes information.
4. Add plane information.
5. Determine best plane between two airports.

Your choice (0 - 5): 

##Compile/Execute Instructions

To compile the files, in the command line, type:
$ make

This will compile files and output them as .o files.
It will also create an executable named "simulator.out".

To run the file, in the command line, type:
$ ./simulator.out

## Features

- Files (.txt, .csv, .dat) with data on cities, airports, and planes
- Extracts data from files mentioned above and organizes them with linked lists for quick access
- Calculates distance and passengers between 2 airports
- Determines all traffic from a single airport
- Display all the plane's information
- Calculates the most cost efficient plane between 2 airports
