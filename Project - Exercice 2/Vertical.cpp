//But: �crire un programme qui prend comme entr�e un nombre � cinq chiffres, v�rifie qu'il y est bien cinq chiffres et l'affiche verticalement. 
//Auteur: Julie Fiiatrault-L�gar�
//Date: 2021-09-01 


//N�cessaire pour tous les programmes pour dialoguer avec l'utilisation (cin, cout)
#include <iostream>

using namespace std; //

int main()

//D�claration des variables
{
	int nombre;

	using namespace std; //Pour pouvoir utiliser (cin, cout) sans std::) 
	
	setlocale(LC_ALL, ""); //Pour les accents 

	//---------------------------------------------------------	

	cout << "Veuillez entrer un nombre � cinq chiffres : ";

	cin >> nombre;

	if (nombre >= 10000) //Nombre doit �tre plus grand ou �gal � 10000 
	{
		cout << nombre << "Est un nombre a cinq chiffres." << endl; //Si nombre >= � 10000 -> nombre � bel et bien cinq chiffres.
	}
	if (nombre < 10000) //Si nombre plus petit que 10000 -> nombre n'a pas cinq chiffres.
	{
		cout << nombre << "N'est pas un nombre � cinq chiffres." << endl;
	}
	if (nombre >= 100000) //Si nombre plus grand ou �gal � 100000 -> celui-ci n'a pas cinq chiffres 
	{
		cout << nombre << "N'est pas un nombre � cinq chiffres." << endl;
	}


}

/* 
12 -> 12 n'est pas un nombre � cinq chiffres.
99721 -> est un nombre � cinq chiffres.
0 -> 0 n'est pas un nombre � cinq chiffres. 
*/