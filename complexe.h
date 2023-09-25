#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

class complexe{
	private:
	 int img;
	 int re;
	 static	 int cp;
	 public:
	 //int cp=0;
	 complexe();
	 complexe(int,int);
	 complexe(complexe &);
	 void saisir();
	 void afficher();
	 float module();
	void copie(complexe &);
	int getReel(){
		return re;
	}
	friend complexe AfficherReel(int n,complexe T[]);
};

void RemplirTC(int n,complexe T[]);
void  AfficherTC(int n,complexe T[]);
complexe& GetMin(int n,complexe T[]);
complexe AfficherReel(int n,complexe T[]);

