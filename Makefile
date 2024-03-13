all: compile link

compile:
	g++ -c tests/shapetest.cpp -IC:\sfml\src\include -I:

link:
	g++ shapetest.o -o shapetest -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 


clean:
	rm -f main *.o