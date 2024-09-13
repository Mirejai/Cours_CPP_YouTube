#include <iostream>



int main() {

	// Une variable tout ce qu'il y a de plus normal
	int variable_normale{ 8 };

	// Création d'un pointeur vers variable_normale
	int* pointeur_vers_variable{ &variable_normale };

	// Création d'un pointeur nul
	int* pointeur2{nullptr};

	// On peut changer la valeur d'un pointeur n'importe quand
	pointeur2 = &variable_normale;
	// Ainsi pointeur2 ne sera plus nul mais ciblera variable_normale

	// On affiche l'adresse stocker dans pointeur2
	std::cout << pointeur2 << std::endl;

	// On affiche le contenu de variable_normale par le biais de pointeur2
	std::cout << *pointeur2 << std::endl;

	// On modifie le contenu de variable_normale par le biais de pointeur_vers_variable
	*pointeur_vers_variable *= 2;


	return 0;

}


