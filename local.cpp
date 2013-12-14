#include "local.h"
#include "luge.h"
#include <stdlib.h> 
//le constructeur

local::local(string name,MYSQL * myCo)
{
	nom=name;
	maConnexion=myCo;
	MYSQL_ROW row;
	MYSQL_RES *confres;
		//on recupere la luge
	mysql_query(maConnexion,"select id,libelle,marque,anneeDeMiseEnService,taille,prixHeure,prixDemieJournee,prixJournee,prixSemaine,couleur from materiel natural join luge");
		confres = mysql_store_result(maConnexion);
		while(( row = mysql_fetch_row(confres)))
		{
 		
		vMaterielDispo.push_back(new luge(atoi(row[0]),string(row[1]),string(row[2]),atoi(row[3]),atof(row[4]),atof(row[5]),atof(row[6]),atof(row[7]),atof(row[8]),string(row[9])));
		}
	// on a recup la luge

	//on recupere le surf
	mysql_query(maConnexion,"select id,libelle,marque,anneeDeMiseEnService,taille,prixHeure,prixDemieJournee,prixJournee,prixSemaine,pied from materiel natural join surf");
		confres = mysql_store_result(maConnexion);
		while(( row = mysql_fetch_row(confres)))
		{
 		
		vMaterielDispo.push_back(new surf(atoi(row[0]),string(row[1]),string(row[2]),atoi(row[3]),atof(row[4]),atof(row[5]),atof(row[6]),atof(row[7]),atof(row[8]),string(row[9])));
		}
	// on a recup le surf
	

	//on recupere paireDeSKi
	mysql_query(maConnexion,"select id,libelle,marque,anneeDeMiseEnService,taille,prixHeure,prixDemieJournee,prixJournee,prixSemaine,typeDeSki from materiel natural join paireDeSki");
		confres = mysql_store_result(maConnexion);
		while(( row = mysql_fetch_row(confres)))
		{
 		
		vMaterielDispo.push_back(new paireDeSki(atoi(row[0]),string(row[1]),string(row[2]),atoi(row[3]),atof(row[4]),atof(row[5]),atof(row[6]),atof(row[7]),atof(row[8]),string(row[9])));
		}

	// on a recup la paireDESKi

	//on recupere la paire De Baton
	mysql_query(maConnexion,"select id,libelle,marque,anneeDeMiseEnService,taille,prixHeure,prixDemieJournee,prixJournee,prixSemaine,matiere from materiel natural join paireDeBaton");
		confres = mysql_store_result(maConnexion);
		while(( row = mysql_fetch_row(confres)))
		{
 		
		vMaterielDispo.push_back(new paireDeBaton(atoi(row[0]),string(row[1]),string(row[2]),atoi(row[3]),atof(row[4]),atof(row[5]),atof(row[6]),atof(row[7]),atof(row[8]),string(row[9])));
		}
	// on a recup la PaireDeBaton				
	
}


//la methode qui affiche le contenu du local
void local::affiche()
{
	cout<<"*******Affichage du materiel dispo dans le local*******"<<endl;
	for(int noPass=0;noPass<vMaterielDispo.size();noPass++)
	{
                //vMaterielDispo[noPass]->affiche();
	}
}

//la methode qui renvoi true si le matos est dispo dans le local
/*
maretiel local::louer(string libelleMatos,string marqueMatos,double tailleMatos)
{
	if(vMaterielDispo.size()==0)
		return NULL;
	else
	{
		for(int noPass=0;noPass<vMaterielDispo.size();noPass++)
		{
			if(vMaterielDispo[noPass]->getLibelle==libelleMatos&&vMaterielDispo[noPass]->getMarque==marqueMatos&&vMaterielDispo[noPass]->getTaille==tailleMatos)
				return true;
		}
	}
	return NULL;
}
*/

//renvoi le numero de la case ou se trouve le materiel
int local::getMaterielParId(int identifiant)
{
	//erreur a corriger avec le return (segm fault)
	int i=-1;
	do
	{
		i++;
	}
	while(vMaterielDispo[i]->getId()!=identifiant);
	return i;
}

void local::ajouteMatos(materiel* nouveauMateriel)
{
	vMaterielDispo.push_back(nouveauMateriel);
}

int local::renvoyerIdentifiant(string natureMatos,double taille,string propriete,string valeur)
{
	int resultat=0;
	int i=0;
	while(!(vMaterielDispo[i]->getClassName()==natureMatos && vMaterielDispo[i]->getTaille()==taille && vMaterielDispo[i]->concorde(propriete,valeur)))
	{
		i++;
	}
	resultat=vMaterielDispo[i]->getId();
	return resultat;
}

//le destructeur
local::~local()
{
	for(int i=0;i<vMaterielDispo.size();i++)
	{
		delete vMaterielDispo[i];
	}
}
