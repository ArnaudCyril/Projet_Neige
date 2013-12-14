#include "paireDeBaton.h"
paireDeBaton::paireDeBaton(int no, string m , string l , int a , float h , float dj , float j , float s,float t, string mat)
:materiel(no,m,l,a,h,dj,j,s,t),matiere(mat)
{

}
void paireDeBaton::affiche()
{
	cout<<endl<<endl<<"Voila les batons :"<<endl;;
	materiel::afficher();
	cout<<"La Matiere : "<<matiere<<endl;
}
bool paireDeBaton::concorde(string propriete,string valeur)
{
	if(propriete=="matiere")
	{
		if(valeur==matiere)
			return true;
		else
			return false;
	}
	else
	{
		return materiel::concorder(propriete,valeur);
	}
}

string paireDeBaton::getClassName()
{
	return "paire de batons";
}

