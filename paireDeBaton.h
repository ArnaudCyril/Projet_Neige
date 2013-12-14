#ifndef PaireDeBaton
#define PaireDeBaton

#include <iostream>
#include "materiel.h"
class paireDeBaton:public materiel{

	public:
		paireDeBaton(int,string,string,int,float,float,float,float,float,string);
		void affiche();
		bool concorde(string propriete,string valeur);
		string getClassName();

	private:
		
		string matiere;
	protected:

};
#endif

