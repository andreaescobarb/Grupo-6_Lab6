#include <iostream>
#include <string>
#include "Persona.h"
#include <vector>

using namespace std;
int menu();


int main(){
  bool salir=true;
  vector<Persona*> personas;

  while (salir) {
    switch (menu()) {
      case 1:{
        char resp = 's';
        while(resp =='s' || resp =='S'){
          string nombre;
          string genero;
          string pelo;
          string ojos;
          string piel;
          string fertil;
          string genPelo;
          string genPiel;
          string genOjos;
          int gen;
          int hair;
          int eyes;
          int skin;
          int fertile;

          cout<<"Ingrese el nombre de persona"<<endl;
          cin>>nombre;
          cout<<"Ingrese el genero de persona"<<endl;
          cout<<"1- Femenino"<<endl;
          cout<<"2- Masculino"<<endl;

          cin>>gen;
          while (gen<0||gen>2) {
            std::cout << "Opcion incorrecta, intente de nuevo" << '\n';
            cin>>gen;
          }
          if (gen==2) {
            genero = "Masculino";
          } else{
            genero = "Femenino";
          }
          cout<<"Ingrese el color de pelo"<<endl;
          cout<<"1- Negro/Cafe"<<endl;
          cout<<"2- Rubio"<<endl;
          cout<<"3- Ginger"<<endl;
          cin>>hair;
          while (hair<0||hair>3) {
            std::cout << "Opcion incorrecta, intente de nuevo" << '\n';
            cin>>hair;
          }
          switch (hair) {
            case 1:{
              pelo ="Negro/Cafe";
              genPelo = "AA";
              break;
            }
            case 2:{
              pelo="Rubio";
              genPelo="aa";
              break;
            }
            case 3:{
              pelo ="Ginger";
              genPelo="aa";
              break;
            }
          }

          cout<<"Ingrese el color de ojos"<<endl;
          cout<<"1- Cafe"<<endl;
          cout<<"2- Azul"<<endl;
          cout<<"3- Verde"<<endl;
          cin>>eyes;
          while (eyes<0||eyes>3) {
            std::cout << "Opcion incorrecta, intente de nuevo" << '\n';
            cin>>eyes;
          }
          switch (eyes) {
            case 1:{
              ojos ="Cafe";
              genOjos="AA";
              break;
            }
            case 2:{
              ojos="Azul";
              genOjos="aa";
              break;
            }
            case 3:{
              ojos ="Verde";
              genOjos="aa";
              break;
            }
          }

          cout<<"Ingrese el color de piel"<<endl;
          cout<<"1- Negro"<<endl;
          cout<<"2- Trigueno"<<endl;
          cout<<"3- Blanco"<<endl;
          cin>>skin;
          while (skin<0||skin>3) {
            std::cout << "Opcion incorrecta, intente de nuevo" << '\n';
            cin>>skin;
          }
          switch (skin) {
            case 1:{
              piel ="Negro";
              genPiel="aa";
              break;
            }
            case 2:{
              pelo="Trigueno";
              genPiel="aa";
              break;
            }
            case 3:{
              pelo ="Blanco";
              genPiel="AA";
              break;
            }
          }

          cout<<"Ingrese fertilidad de persona"<<endl;
          cout<<"1- Fertil"<<endl;
          cout<<"2- Infertil"<<endl;
          cin>>fertile;
          while (fertile<0||fertile>2) {
            std::cout << "Opcion incorrecta, intente de nuevo" << '\n';
            cin>>fertile;
          }

          switch (fertile) {
            case 1:{
              fertil = "fertil";
              break;
            }
            case 2:{
              fertil="infertil";
              break;
            }
          }

          personas.push_back(new Persona(nombre, genero, pelo, ojos, piel, fertil));

          std::cout << "Desea agregar mas personas [S/N]" << '\n';
          cin>>resp;

        }
        break;
      }
      case 2:{
        for (int i = 0; i < personas.size(); i++) {
          cout<<i<<"- "<<personas.at(i)->getNombre()<<endl;
        }

        break;
      }
      case 3:{

        break;
      }
      case 4:{

        break;
      }
      case 5:{
        salir = false;
        break;
      }
    }
  }

     return 0;
}

int menu(){
  cout<<"1- Agregar nueva persona"<<endl;
  cout<<"2- Eliminar persona"<<endl;
  cout<<"3- Listar personas"<<endl;
  cout<<"4- Ley de Mendel"<<endl;
  cout<<"5- Salir"<<endl;
  cout<<"Ingrese opcion"<<endl;
  int opc;
  cin>>opc;
  while(opc<0||opc>5){
    cout<<"Opcion incoreccta, intente de nuevo"<<endl;
    cin>>opc;
  }
  return opc;
}
