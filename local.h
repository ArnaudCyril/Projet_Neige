#include <iostream>
#include "materiel.h"
#include <vector>
#include <mysql.h>
#include "luge.h"
#include "paireDeSki.h"
#include "paireDeBaton.h"
#include "surf.h"

using namespace std;

class local
{
	private:
		//les propriétés
		vector <materiel*> vMaterielDispo;
		string nom;
		MYSQL * maConnexion;

	public:

		//les methodes
		void affiche();
		//materiel louer(string,string,double);
		int getMaterielParId(int identifiant);
		void ajouteMatos(materiel* nouveauMateriel);
		int renvoyerIdentifiant(string natureMatos,double taille,string propriete,string valeur);
		
		

		//le constructeur
		local(string,MYSQL * co);

		//le destructeur
		~local();

	protected:
};	
