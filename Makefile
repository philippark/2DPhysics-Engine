all: compile link

compile:
	g++ -c src/physics/world.cpp -IC:\sfml\src\include -I:
	g++ -c src/physics/body.cpp -IC:\sfml\src\include -I:
	#g++ -c src/physics/collision.cpp -IC:\sfml\src\include -I:

	#test file:
	g++ -c tests/collision_test.cpp -IC:\sfml\src\include -I:

link:
	g++ collision_test.o collision.o world.o body.o -o collision_test -LC:\sfml\src\lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 


clean:
	rm -f main *.o