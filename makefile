all: main

main: src/main.cpp
	rm -f main && g++ src/main.cpp -o main -lncurses -I./include && clear && ./main

clean:
	rm -f main

run:
	./main