#include "materiel.h"
#include <sstream>
//le constructeur
materiel::materiel(int pId,string pLibelle,string pMarque,int pAnneeDeMiseEnService,double pTaille,double pPrixHeure,double pPrixDemieJournee,double pPrixJournee,double pPrixSemaine)

:id(pId),libelle(pLibelle),marque(pMarque),anneeDeMiseEnService(pAnneeDeMiseEnService),taille(pTaille),prixHeure(pPrixHeure),prixDemieJournee(pPrixDemieJournee),prixJournee(pPrixJournee),prixSemaine(pPrixSemaine)
{
	//rien à faire
}

//methode affiche
void materiel::afficher()
{
	cout<<"l'id                       : "<<id<<endl;
	cout<<"libelle                    : "<<libelle<<endl;
	cout<<"la marque                  : "<<marque<<endl;
	cout<<"l'annee de mise en service : "<<anneeDeMiseEnService<<endl;
	cout<<"la taille                  : "<<taille<<endl;
	cout<<"prix/h                     : "<<prixHeure<<endl;
	cout<<"prix/j                     : "<<prixDemieJournee<<endl;
	cout<<"prix/dj                    : "<<prixJournee<<endl;
	cout<<"prix/s                     : "<<prixSemaine<<endl;

}

//les acesseur en lecture des diffrents prix
double materiel::getPrixHeure()
{return prixHeure;}
double materiel::getPrixDemieJournee()
{return prixDemieJournee;}
double materiel::getPrixJournee()
{return prixJournee;}
double materiel::getPrixSemaine()
{return prixSemaine;}
//les acesseur en lecture des diffrentes caracteristiques des matos
string materiel::getLibelle()
{return libelle;}
string materiel::getMarque()
{
//return materiel
return "La marque du matos";}


double materiel::getTaille()
{return taille;}

//la methode concorder
bool materiel::concorder(string p,string v)
{
	stringstream ss;
	ss<<anneeDeMiseEnService;
	return (p=="annee" && v==ss.str());
}


