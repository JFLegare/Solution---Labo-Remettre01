//But: Écrire un programme qui prend comme entrée un nombre à cinq chiffres, vérifie qu'il y est bien cinq chiffres et l'affiche verticalement. 
//Auteur: Julie Fiiatrault-Légaré
//Date: 2021-09-01 


//Nécessaire pour tous les programmes pour dialoguer avec l'utilisation (cin, cout)
#include <iostream>

using namespace std; //

int main()

//Déclaration des variables
{
	int nombre;

	using namespace std; //Pour pouvoir utiliser (cin, cout) sans std::) 
	
	setlocale(LC_ALL, ""); //Pour les accents 

	//---------------------------------------------------------	

	cout << "Veuillez entrer un nombre à cinq chiffres : ";

	cin >> nombre;

	if (nombre >= 10000) //Nombre doit être plus grand ou égal à 10000 
	{
		cout << nombre << "Est un nombre a cinq chiffres." << endl; //Si nombre >= à 10000 -> nombre à bel et bien cinq chiffres.
	}
	if (nombre < 10000) //Si nombre plus petit que 10000 -> nombre n'a pas cinq chiffres.
	{
		cout << nombre << "N'est pas un nombre à cinq chiffres." << endl;
	}
	if (nombre >= 100000) //Si nombre plus grand ou égal à 100000 -> celui-ci n'a pas cinq chiffres 
	{
		cout << nombre << "N'est pas un nombre à cinq chiffres." << endl;
	}


}

/* 
12 -> 12 n'est pas un nombre à cinq chiffres.
99721 -> est un nombre à cinq chiffres.
0 -> 0 n'est pas un nombre à cinq chiffres. 
*/