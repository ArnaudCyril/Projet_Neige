#include "matosSortie.h"

//le constructeur
matosSortie::matosSortie()
{

}	//...
void matosSortie::affiche()
{
	for(int noPass=0;noPass<vMatSortie.size();noPass++)
	{
		cout<<"*******Affichage du materiel dans le local *******"<<endl;
		vMatSortie[noPass]->affiche();
	}
}

