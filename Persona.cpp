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
   int Pelo1=1,Pelo2=1,Pelo3=1,Pelo4=1;
   int Piel1=1,Piel2=1,Piel3=1,Piel4=1;
   int Ojos1=1,Ojos2=1,Ojos3=1,Ojos4=1;
//genes ojos
   //RESP1
   string Ojosresp1=this->getGeneOjos()[0];
   Ojosresp1+= per.getGeneOjos()[0];
   //RESP2
   string Ojosresp2=this->getGeneOjos()[0];
   Ojosresp2+= per.getGeneOjos()[1];
   //RESP3
   string Ojosresp3=this->getGeneOjos()[1];
   Ojosresp3+= per.getGeneOjos()[0];
   //RESP4
   string Ojosresp4=this->getGeneOjos()[1];
   Ojosresp4+= per.getGeneOjos()[1];
//genes PELO
      string adnpelo=per.getGenePelo(), adnpiel=per.getGenePiel(),adnojos=per.getGeneOjos(); 
   //RESP1
   string Peloresp1=this->getGenePelo()[0];
   resp1+= per.getGeneOjos()[0];
   //RESP2
   string Peloresp2=this->getGenePelo()[0];
   Peloresp2+= per.getGenePelo()[1];
   //RESP3
   string Peloresp3=this->getGenePelo()[1];
   Peloresp3+= per.getGenePelo()[0];
   //RESP4
   string Peloresp4=this->getGenePelo()[1];
   PelorOjosesp4+= per.getGenePelo()[1];
//genes PIEL
   //RESP1
   string Pielresp1=this->getGenePiel()[0];
   Pielresp1+= per.getGenePiel()[0];
   //RESP2
   string Pielresp2=this->getGenePiel()[0];
   Pielresp2+= per.getGenePiel()[1];
   //RESP3
   string Pielresp3=this->getGenePiel()[1];
   Pielresp3+= per.getGenePiel()[0];
   //RESP4
   string Pielresp4=this->getGenePiel()[1];
   Pielresp4+= per.getGenePiel()[1];

   ///revision en el de probabilidad
   //ojos1
   if (Ojosresp1==Ojosresp2){
      OjosP++;
   }
   if (Ojosresp1==Ojosresp3){
      Ojos1++;
   }
   if (Ojosresp1==Ojosresp4){
      Ojos1++;
   }
   //ojos2
   if (Ojosresp2==Ojosresp1){
      Ojos2++;
   }
   if (Ojosresp2==Ojosresp3){
      Ojos2++;
   }
   if (Ojosresp2==Ojosresp4){
      Ojos2++;
   }
   //ojos3
   if (Ojosresp3==Ojosresp1){
      Ojos3++;
   }
   if (Ojosresp3==Ojosresp2){
      Ojos3++;
   }
   if (Ojosresp3==Ojosresp4){
      Ojos3++;
   }
   //ojos4
   if (Ojosresp4==Ojosresp1){
      pelo4++;
   }
   if (Ojosresp4==Ojosresp2){
      pelo4++;
   }
   if (Ojosresp4==Ojosresp3){
      pelo4++;
   }
/////////////////////////////////////
      //ojos1
   if (Pielresp1==Pielresp2){
      Piel1++;
   }
   if (Pielresp1==Pielresp3){
      Piel1++;
   }
   if (Pielresp1==Pielresp4){
      Piel1++;
   }
   //ojos2
   if (Pielresp2==Pielresp1){
      Piel2++;
   }
   if (Pielresp2==Pielresp3){
      Piel2++;
   }
   if (Pielresp2==Pielresp4){
      Piel2++;
   }
   //ojos3
   if (Pielresp3==Pielresp1){
      Piel3++;
   }
   if (Pielresp3==Pielresp2){
      Piel3++;
   }
   if (Pielresp3==Pielresp4){
      Piel3++;
   }
   //ojos4
   if (Pielresp4==Pielresp1){
      Piel4++;
   }
   if (Pielresp4==Pielresp2){
      Piel4++;
   }
   if (Pielresp4==Pielresp3){
      Piel4++;
   }
////////////////////////////////////////
      //ojos1
   if (Peloresp1==Peloresp2){
      Pelo1++;
   }
   if (Peloresp1==Peloresp3){
      Pelo1++;
   }
   if (Peloresp1==Peloresp4){
      Pelo1++;
   }
   //ojos2
   if (Peloresp2==Peloresp1){
      Pelo2++;
   }
   if (Peloresp2==Peloresp3){
      Pelo2++;
   }
   if (Peloresp2==Peloresp4){
      Pelo2++;
   }
   //ojos3
   if (Peloresp3==Peloresp1){
      Pelo3++;
   }
   if (Peloresp3==Peloresp2){
      Pelo3++;
   }
   if (Peloresp3==Peloresp4){
      Pelo3++;
   }
   //ojos4
   if (Peloresp4==Peloresp1){
      Pelo4++;
   }
   if (Peloresp4==Peloresp2){
      Pelo4++;
   }
   if (Peloresp4==Peloresp3){
      Pelo4++;
   }
//verifico el color de pelo

   if (Pelo1>Pelo2&&Pelo1>Pelo3&&Pelo1>Pelo4){
      adnpelo=Peloresp1;
   }
   if (Pelo2>Pelo1&&Pelo2>Pelo3&&Pelo2>Pelo4){
      adnpelo=Peloresp2;
   }
   if (Pelo3>Pelo2&&Pelo3>Pelo1&&Pelo3>Pelo4){
      adnpelo=Peloresp3;
   }
   if (Pelo4>Pelo1&&Pelo4>Pelo2&&Pelo4>Pelo3){
      adnpelo=Peloresp4;
   }   
//////////////////////
 Ojosverifico el color de pelo
   if (Ojos1>Ojos2&&Ojos1>Ojos3&&Ojos1>Ojos4){
      adnojos=Ojosresp1;
   }
   if (Ojos2>Ojos1&&Ojos2>Ojos3&&Ojos2>Ojos4){
      adnojos=Ojosresp2;
   }
   if (Ojos3>Ojos2&&Ojos3>Ojos1&&Ojos3>Ojos4){
      adnojos=Ojosresp3;
   }
   if (Ojos4>Ojos1&&Ojos4>Ojos2&&Ojos4>Ojos3){
      adnojos=Ojosresp4;
   }  
////////////////////////
   //verifico el color de pelo
   if (Piel1>Piel2&&Piel1>Piel3&&Piel1>Piel4){
      adnpiel=Pielresp1;      
   }
   if (Piel2>Piel1&&Piel2>Piel3&&Piel2>Piel4){
      adnpiel=Pielresp2;
   }
   if (Piel3>Piel2&&Piel3>Piel1&&Piel3>Piel4){
      adnpiel=Pielresp3;
   }
   if (Piel4>Piel1&&Piel4>Piel2&&Piel4>Piel3){
      adnpiel=Pielresp4;
   }   

          string nombre;
          string genero;
          string pelo;
          string ojos;
          string piel;
          string fertil;
          int gen;
          int hair;
          int eyes;
          int skin;
          int fertile;
          cout<<"Ingrese el nombre de persona"<<endl;
          cin>>nombre;
         int sexo= rand()%10;
         if (sexo<5){
            fertile="Fertil";          
         }else{
            fertile="Infertil";
         }
         if (sexo>5){
            genero="Masculino";
         }else{
            genero+"Femenino";
         }
          Persona m = new Persona(nombre, genero, pelo, ojos, piel, fertil, adnpelo, adnojos, adnpiel);
   return m;
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