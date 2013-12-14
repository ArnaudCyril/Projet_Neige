#include "paireDeSki.h"
paireDeSki::paireDeSki(int no, string m , string l , int a , float h , float dj , float j , float s,float t, string typ)
:materiel(no,m,l,a,h,dj,j,s,t),typeDeSki(typ)
{

}

void paireDeSki::affiche()
{
	cout<<endl<<endl<<"Voila les skis :"<<endl;;
	materiel::afficher();
	cout<<"Le type : "<<typeDeSki<<endl;
}
bool paireDeSki::concorde(string propriete,string valeur)
{
	if(propriete=="type")
	{
		if(valeur==typeDeSki)
			return true;
		else
			return false;
	}
	else
	{
		return materiel::concorder(propriete,valeur);
	}
}

string paireDeSki::getClassName()
{
	return "surf";
}

