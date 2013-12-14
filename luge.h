#ifndef LUGE
#define LUGE
#include <iostream>
#include "materiel.h"
using namespace std;

class luge: public materiel
{
	private:
		//les propriétés
		string couleur;

	public:

		//les methodes
		void affiche();
		bool concorde(string propriete,string valeur);
		string getClassName();


		//le constructeur
		luge(int,string,string,int,double,double,double,double,double,string);

		//le destructeur

	protected:
};
#endif
	
