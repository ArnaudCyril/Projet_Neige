#include "paireDeChaussure.h"
paireDeChaussure::paireDeChaussure(int no, string m , string l , int a , float h , float dj , float j , float s,float t,string se)
:materiel(no,m,l,a,h,dj,j,s,t),sexe(se)
{

}
void paireDeChaussure::affiche()
{
	materiel::afficher();
	cout<<"La catégorie : "<<sexe<<endl;
}
bool paireDeChaussure::concorde(string propriete,string valeur)
{
	if(propriete=="sexe")
	{
		if(valeur==sexe)
			return true;
		else
			return false;
	}
	else
	{
		return materiel::concorder(propriete,valeur);
	}
}

string paireDeChaussure::getClassName()
{
	return "paire de chaussures";
}

