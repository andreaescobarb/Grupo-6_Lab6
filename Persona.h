#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
class Persona{
	protected:
		string Nombre;
		string Sexo;
		string ColorPelo;
		string ColorOjos;
		string ColorPiel;
		string Fertilidad;
	public:
		Persona(string,string,string,string,string,string);
		Persona();
		string getNombre();
		void setNombre(string);

		string getSexo();
		void setSexo(string);

		string getColorPelo();
		void setColorPelo(string);

		string getColorOjos();
		void setColorOjos(string);

		string getColorPiel();
		void setColorPiel(string);

		string getFertilidad();
		void setFertilidad(string);

};
#endif