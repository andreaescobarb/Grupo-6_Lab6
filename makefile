main:    main.cpp Persona.o 
	g++ main.cpp Persona.o -o main
main.o:	main.cpp Persona.h 
	g++ -c main.cpp
Persona:	Persona.cpp Persona.h
	g++ -c Persona.cpp
clean:
	rm  *.o main 