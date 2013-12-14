#include <iostream>
#include "materiel.h"
#include <vector>
using namespace std;

class location
{
	private:
		//les propriétés
		
		vector <materiel *> vMaterielLouer;
		int dureeLocation;//1 pour lheure - 2 pour la demie-journee - 3 pour la journee - 4 pour la semaine

	public:

		//les methodes
		void affichePrix();
		void affiche();
		int getDuree();
		//le constructeur
		location(vector <materiel *> pVectorMat);

		//le destructeur
	protected:
};	
