//But: Écrire un programme qui lit en entier et qui détermine et affiche s'il s'agit d'un entier pair ou d'un entier impair. 
//Auteur: Julie Filiatrault-Légaré 
//Date: 2021-08-31 

#include <iostream> //Nécessaire pour tous les programmes pour dialoguer avec l'utilisation (cin, cout)
using namespace std;

void main()
{

	//Déclaration des variables 
	int nbre;


	//---------------------------------------------------------


		//On rentre le nombre. 
	std::cout << "Veuillez entrer un nombre : ";

	std::cin >> nbre;

	//Si 

	if (nbre % 2 == 0) //Les nombres qui se divisent par 2 sont pair.

		std::cout << nbre << "est pair";

	else

		std::cout << nbre << "est impair"; //Au contraire ceux qui ne se divise pas par 2 sont impair.

}

/*

0 -> 0 est pair
12 -> 12 est pair 
17 -> 17 est impair 
956 -> 956 est pair 
17 491 -> 17 491 est impair 

*/ 





