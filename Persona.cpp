#include "Persona.h"

Persona::Persona(string Nombre,string Genero,string ColorPelo,string ColorPiel,string ColorOjos,string Fertil,string GenePelo,string GeneOjos,string GenePiel){
      this->Nombre=Nombre;
      this->Genero=Genero;
      this->ColorPelo=ColorPelo;
      this->ColorPiel=ColorPiel;
      this->ColorOjos=ColorOjos;
      this->Fertil=Fertil;
      this->GenePelo=GenePelo;
      this->GeneOjos=GeneOjos;
      this->GenePiel=GenePiel;
}


Persona Persona::operator+(Persona& per) {
   Persona Envio;
	 string resp1, resp2, resp3, resp4;
	 resp1=this.persona


   return Envio;
}


Persona::Persona(){

}

void Persona::setNombre(string Nombre){
   this-> Nombre=Nombre;
}

string Persona::getNombre(){
   return Nombre;
}

void Persona::setGenero(string Genero){
   this-> Genero=Genero;
}

string Persona::getGenero(){
   return Genero;
}

void Persona::setColorPelo(string ColorPelo){
   this-> ColorPelo=ColorPelo;
}

string Persona::getColorPelo(){
   return ColorPelo;
}

void Persona::setColorPiel(string ColorPiel){
   this-> ColorPiel=ColorPiel;
}

string Persona::getColorPiel(){
   return ColorPiel;
}

void Persona::setColorOjos(string ColorOjos){
   this-> ColorOjos=ColorOjos;
}

string Persona::getColorOjos(){
   return ColorOjos;
}

void Persona::setFertil(string Fertil){
   this-> Fertil=Fertil;
}

string Persona::getFertil(){
   return Fertil;
}

void Persona::setGenePelo(string GenePelo){
   this-> GenePelo=GenePelo;
}

string Persona::getGenePelo(){
   return GenePelo;
}

void Persona::setGeneOjos(string GeneOjos){
   this-> GeneOjos=GeneOjos;
}

string Persona::getGeneOjos(){
   return GeneOjos;
}

void Persona::setGenePiel(string GenePiel){
   this-> GenePiel=GenePiel;
}

string Persona::getGenePiel(){
   return GenePiel;
}
