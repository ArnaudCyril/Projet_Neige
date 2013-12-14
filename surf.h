#ifndef Surf
#define Surf

#include <iostream>
#include "materiel.h"
class surf:public materiel{

	public:
		surf(int,string,string,int,float,float,float,float,float,string);
		void affiche();
		bool concorde(string propriete,string valeur);
		string getClassName();


	private:
		string pied;

	protected:

};
#endif

