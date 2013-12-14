#include "lesLocations.h"

//le constructeur
lesLocations::lesLocations()
{

}	//...
void lesLocations::affiche()
{
	for(int noPass=0;noPass<vLocation.size();noPass++)
	{
		cout<<"*******Affichage du materiel dans le local *******"<<endl;
		vLocation[noPass]->affiche();
	}
}

