all: main

main: src/main.cpp
	g++ src/main.cpp src/include/*.cpp -o main -lncurses -Isrc/include

clean:
	rm -f main

run:
	./main