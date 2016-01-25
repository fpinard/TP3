all: test_polymorph

test_polymorph: Character.o Yoshi.o Mario.o test_polymorph.o
	g++ Character.o Yoshi.o Mario.o test_polymorph.o -Wall -Wextra -pedantic -o test_polymorph -std=c++11 -g

Character.o: Character.cpp Character.h
	g++ -c Character.cpp -Wall -Wextra -pedantic -o Character.o -std=c++11 -g

Yoshi.o: Yoshi.cpp Yoshi.h
	g++ -c Yoshi.cpp -Wall -Wextra -pedantic -o Yoshi.o -std=c++11 -g

Mario.o: Mario.cpp Mario.h
	g++ -c Mario.cpp -Wall -Wextra -pedantic -o Mario.o -std=c++11 -g

test_polymorph.o: test_polymorph.cpp Character.h Yoshi.h
	g++ -c test_polymorph.cpp -Wall -Wextra -pedantic -o test_polymorph.o -std=c++11 -g

clean:
	rm -f *.o
