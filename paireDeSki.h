#ifndef PaireDeSki
#define PaireDeSki

#include <iostream>
#include "materiel.h"

class paireDeSki:public materiel{
	public:
		paireDeSki(int,string,string,int,float,float,float,float,float,string);
		void affiche();
		bool concorde(string propriete,string valeur);
		string getClassName();

	private:
		
		string typeDeSki;
	protected:

};
#endif

