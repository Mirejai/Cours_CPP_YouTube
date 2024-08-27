#include <iostream>

// Déclaration de la fonction afficher_table
void afficher_table(int table);

int main() {

	int table{0};
	std::cout << "Quelle table voulez-vous afficher ?" << std::endl;
	std::cin >> table;

	// Appel de la fonction afficher_table
	// Pour afficher la table de "table"
	afficher_table(table);

	return 0;

}

// Définition de la fonction afficher_table
void afficher_table(int table) {

	std::cout << "Table de " << table << " :" << std::endl;

	for (int nombre_2 = 0 ; nombre_2 <= 10 ; nombre_2++) 
		std::cout << table << "x" << nombre_2 << " = " << table * nombre_2 << std::endl;
	
	std::cout << std::endl;

}
