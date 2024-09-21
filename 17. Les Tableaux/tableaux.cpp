#include <iostream>

void afficher_tableau(const int* début, const int* fin) {
	for (const int* i{début}; i <= fin; i++)
		std::cout << *i << std::endl;
}

int main(){

	const int TAILLE_TABLEAU_1{8};
	int tableau_1[TAILLE_TABLEAU_1] = {0,1,2,3,4,5,6,7};

	std::cout << "Premier élément du tableau : " << tableau_1[0] << std::endl;
	std::cout << "Dernier élément du tableau : " << tableau_1[TAILLE_TABLEAU_1 - 1] << std::endl;

	std::cout << "Contenu de tableau_1 : " << std::endl;
	afficher_tableau(tableau_1, &tableau_1[TAILLE_TABLEAU_1 - 1]);

	return 0; 

}
