#ifndef MATERIEL
#define MATERIEL
#include <iostream>
using namespace std;

class materiel
{
	private:
		//les propriétés
		int id;//ex: 1
		string libelle;
		string marque;//ex: nike
		int anneeDeMiseEnService;//ex : 2013
		double taille;
		double prixHeure;
		double prixDemieJournee;
		double prixJournee;
		double prixSemaine;


	public:
		//acesseur en lecture
		double getPrixHeure();
		double getPrixDemieJournee();
		double getPrixJournee();
		double getPrixSemaine();
		string getLibelle();
		string getMarque();
		double getTaille();
		int getId(){return id;}



		//les methodes
		void afficher();
                virtual void affiche()=0;
		virtual bool concorde(string propriete,string valeur)=0;
		bool concorder(string propriete,string valeur);
		virtual string getClassName()=0;

		//le constructeur
		materiel(int,string,string,int,double,double,double,double,double);
		materiel(){};
		//le destructeur

	protected:
};	
#endif
