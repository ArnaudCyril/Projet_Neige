#include "location.h"

//le constructeur
location::location(vector<materiel *> pVectorMat):vMaterielLouer(pVectorMat)
{
	//...
}

//la methode qui affiche le prix de la location
void location::affichePrix()
{
	double prixTotalLocation=0;
	dureeLocation=getDuree();
	string complement;
	for(int noPass=0;noPass<vMaterielLouer.size();noPass++)
	{
		switch (dureeLocation)
		{
			case 1: prixTotalLocation+=vMaterielLouer[noPass]->getPrixHeure(); 
				complement="pour l'heure ";
				break;
			case 2: prixTotalLocation+=vMaterielLouer[noPass]->getPrixDemieJournee(); 
				complement="pour la demi journee ";

				break;
			case 3: prixTotalLocation+=vMaterielLouer[noPass]->getPrixJournee(); 
				complement="pour la journee";

				break;
			case 4: prixTotalLocation+=vMaterielLouer[noPass]->getPrixSemaine();
				complement="pour la semaine ";

				break;
		}	
	}
	cout<<"Le prix total de cette location"+complement+"est de : "<<prixTotalLocation<<" €."<<endl;
}

//la methode qui affiche la location
void location::affiche()
{
	for(int noPass=0;noPass<vMaterielLouer.size();noPass++)
	{
		cout<<"*******Affichage du materiel louer*******"<<endl;
		vMaterielLouer[noPass]->affiche();
	}
}
int location::getDuree()
{
	int nbSwitch;
	cout<<"Quelle est la duree : "<<endl;
	cout<<"1--------- Heure>"<<endl;
	cout<<"2--------- Demi Journée>"<<endl;
	cout<<"3--------- Journee>"<<endl;
	cout<<"4--------- Semaine>"<<endl;
	cin>>nbSwitch;
	return nbSwitch;
}

