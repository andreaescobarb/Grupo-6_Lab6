#include "Persona.h"

Persona::Persona(string Nombre,string Sexo,string ColorPelo,string ColorOjos,string ColorPiel,string Fertilidad){
	this->Nombre=Nombre;
	this->Sexo=Sexo;
	this->ColorPelo=ColorPelo;
	this->ColorOjos=ColorOjos;
	this->ColorPiel=ColorPiel;
	this->Fertilidad=Fertilidad;
}
Persona::Persona(){

}void Persona::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string Persona::getNombre(){
   return Nombre;
}
void Persona::setSexo(string Sexo){
   this-> Sexo=Sexo;
}
string Persona::getSexo(){
   return Sexo;
}
void Persona::setColorPelo(string ColorPelo){
   this-> ColorPelo=ColorPelo;
}
string Persona::getColorPelo(){
   return ColorPelo;
}
void Persona::setColorOjos(string ColorOjos){
   this-> ColorOjos=ColorOjos;
}
string Persona::getColorOjos(){
   return ColorOjos;
}
void Persona::setColorPiel(string ColorPiel){
   this-> ColorPiel=ColorPiel;
}
string Persona::getColorPiel(){
   return ColorPiel;
}
void Persona::setFertilidad(string Fertilidad){
   this-> Fertilidad=Fertilidad;
}
string Persona::getFertilidad(){
   return Fertilidad;
}
