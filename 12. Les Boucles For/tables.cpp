/**
 * Corrigé de l'exercice de la partie 12 du cours C++.
 */


#include <iostream> // Pour afficher du texte dans la console

int main() {

	// Ici on met nombre_1 <= 10 car si on mettait < on aurait pas la table de 10
	for (int nombre_1 = 0 ; nombre_1 <= 10 ; nombre_1++){

		// On affique quelle table on va calculer
		std::cout << "Table de " << nombre_1 << " :" << std::endl;

		// On peut imbriquer des boucles dans d'autres
		for (int nombre_2 = 0 ; nombre_2 <= 10 ; nombre_2++) // Si le code de la boucle ne comprend qu'une instruction on est pas obligé de mettre des accolades.
			std::cout << nombre_1 << "x" << nombre_2 << " = " << nombre_1 * nombre_2 << std::endl; // On affiche le produit de nombre_1 et nombre_2

		
		std::cout << std::endl; // On met de l'espace entre les tables


	}

	return 0; // On oubli pas return 0; bien sûr.

}
