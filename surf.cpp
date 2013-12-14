#include "surf.h"
surf::surf(int no, string m , string l , int a , float h , float dj , float j , float s,float t, string pie)
:materiel(no,m,l,a,h,dj,j,s,t),pied(pie)
{

}
void surf::affiche()
{
	cout<<endl<<endl<<"Voila du surf :"<<endl;
	materiel::afficher();
	cout<<"Le pied : "<<pied<<endl;
}
bool surf::concorde(string propriete,string valeur)
{
	if(propriete=="pied")
	{
		if(valeur==pied)
			return true;
		else
			return false;
	}
	else
	{
		return materiel::concorder(propriete,valeur);
	}
}

string surf::getClassName()
{
	return "surf";
}

