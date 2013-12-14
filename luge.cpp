#include "luge.h"

//le constructeur
luge::luge(int pId,string pLibelle,string pMarque,int pAnneeDeMiseEnService,double pTaille,double pPrixHeure,double pPrixDemieJournee,double pPrixJournee,double pPrixSemaine,string pCouleur):materiel(pId,pLibelle,pMarque,pAnneeDeMiseEnService,pTaille,pPrixHeure,pPrixDemieJournee,pPrixJournee,pPrixSemaine),couleur(pCouleur)
{
	//rien à faire
}

//la methode affiche
void luge::affiche()
{
	cout<<"-------------*****---------"<<endl;
        cout<<"je suis une luge"<<endl;
	materiel::afficher();
	cout<<"la couleur                 : "<<couleur<<endl;

}

bool luge::concorde(string propriete,string valeur)
{
	if(propriete=="couleur")
	{
		if(valeur==couleur)
			return true;
		else
			return false;
	}
	else
	{
		return materiel::concorder(propriete,valeur);
	}
}

string luge::getClassName()
{
	return "luge";
}

