#include "chaussuresDeSurf.h"

chaussuresDeSurf::chaussuresDeSurf(int no, string m , string l , int a , float h , float dj , float j , float s,float t,string sex)
:paireDeChaussure(no,m,l,a,h,dj,j,s,t,sex)
{

}
void chaussuresDeSurf::affiche()
{
	cout<<endl<<endl<<"Voila les chaussures de surf :"<<endl;
		paireDeChaussure::affiche();
}
