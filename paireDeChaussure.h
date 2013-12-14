#ifndef PAIREDECHAUSSURE
#define PAIREDECHAUSSURE
#include <iostream>

#include "materiel.h"
class paireDeChaussure:public materiel{

	public:
		void affiche();
		paireDeChaussure(int,string,string,int,float,float,float,float,float,string);
		bool concorde(string propriete,string valeur);
		string getClassName();


	private:
		string sexe;	
	protected:

};
#endif
