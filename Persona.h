#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

class Persona{

	protected:
		string Nombre;
		string Genero;
		string ColorPelo;
		string ColorPiel;
		string ColorOjos;
		string Fertil;
		string GenePelo;
		string GeneOjos;
		string GenePiel;

	public:
		Persona(string,string,string,string,string,string,string,string,string);
		Persona();
		string getNombre();
		void setNombre(string);

		string getGenero();
		void setGenero(string);

		string getColorPelo();
		void setColorPelo(string);

		string getColorPiel();
		void setColorPiel(string);

		string getColorOjos();
		void setColorOjos(string);

		string getFertil();
		void setFertil(string);

		string getGenePelo();
		void setGenePelo(string);

		string getGeneOjos();
		void setGeneOjos(string);

		string getGenePiel();
		void setGenePiel(string);
		//metodos sobrecargados
		Persona operator+(Persona& p);
		Persona operator*(Persona& p);

};
#endif