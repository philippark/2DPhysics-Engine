all: compile link

compile:
	g++ -c tests/body_test.cpp -IC:\sfml\src\include -I:

link:
	g++ body_test.o -o body_test -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 


clean:
	rm -f main *.o