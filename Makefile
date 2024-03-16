all: compile link

compile:
	g++ -c tests/world_test.cpp -IC:\sfml\src\include -I:

link:
	g++ world_test.o -o world_test -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 


clean:
	rm -f main *.o