#include "complexe.h"

 int complexe::cp=0;
 
complexe::complexe() // constructeur par défaut
{
	cp++;
	re=2;
	img=3;
	
}
complexe::complexe(int a,int b) //constructeur avec des parametres
{
	cp++;
	re=a;
	img=b;
}
complexe::complexe(complexe &c) //constructeur de copie
{
	cp++;
	re=c.re;
	img=c.img;
}
void complexe::copie(complexe &c)
{
	re=c.re;
	img=c.img;
}
void complexe::saisir()
    {
    	cout<<"donner le nombre reel:"<<endl;
    	cin>>re;
    	cout<<"donner l'imaginaire:"<<endl;
    	cin>>img;
	}

void complexe::afficher()
    {
    	cout<<re<<"+"<<img<<"i"<<endl;
    	cout<<"compteur est :"<<cp<<endl;
	}	
	
 float  complexe::module()
 {
 	float m;
 	m=sqrt(pow(re,2)+pow(img,2));
 	cout<<"son module est:"<<m<<endl;
 	return m;
 
 }	
 
 void RemplirTC(int n,complexe T[])
 { 
   for(int i=0;i<n;i++)
    {
    	T[i].saisir();
	}
}
void  AfficherTC(int n,complexe T[])
  {
  	 for(int i=0;i<n;i++)
  	  {
  	     T[i].afficher();	
	  }
  }	
  
complexe& GetMin(int n,complexe T[])
 {  int j=0;
    float Min=T[0].module();
    for(int i;i<n;i++)
    {
    	
    	if(T[i].module()<Min)
    	  {
		  Min=T[i].module();
		  j=i;
          }
	}
	
 	return T[j];
   }  
complexe AfficherReel(int n,complexe T[])
{
	int j=0;
    int Max=T[0].re;
    for(int i;i<n;i++)
    {
    	printf("T[%d].re: %d/n",i,T[i].re);
    	if(T[i].re>Max)
    	  {
		  Max=T[i].re;
		  j=i;
          }
	
    }
	return T[j];
}
  
  




