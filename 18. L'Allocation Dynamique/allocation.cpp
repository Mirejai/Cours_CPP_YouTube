#include <iostream> // Pour std::cout et std::cin
#include <cstdlib> // Pour malloc() et free()



// Prototype de la fonction créer_tableau_bool qui va
// allouer de la mémoire pour un tableau de bool
// La fonction est définie sous la fonction main
bool* créer_tableau_bool(const unsigned long long& taille);



int main() {

	char* caractère_ptr = new char; // On alloue de la mémoire pour 1 caractère et on stocke l'adresse de la zone mémoire allouée dans caractère_ptr

	// On modifie le contenu de la zone mémoire
	*caractère_ptr = 'g';

	// On affiche le contenu de la zone mémoire
	std::cout << *caractère_ptr << std::endl;

	// On libère la zone mémoire que nous avons alloué.
	delete caractère_ptr;
	caractère_ptr = nullptr;

	/**
	 * On va créer un tableau de bool en demendant à l'utilisateur sa taille
	 */

	std::cout << "Le programme va créer un tableau de bool." << std::endl;
	std::cout << "De combien d'éléments doit t'il être ?" << std::endl;

	unsigned long long taille;
	std::cin >> taille;

	if (taille < 1) {
		/**
		 * Si l'utilisateur entre 0, on termine le programme.
		 */
		std::cout << "Vous n'avez pas indiqué une valeur assez grande." << std::endl;
		return 0;
	}

	// Si le nombre entré par l'utilisateur est trop grand
	// On peut lui demander de confirmer

	const unsigned long long TROP_GRAND = 1000ull; // On va dire que 1000 commence à être trop grand

	if (taille > TROP_GRAND) {
		std::cout << "Êtes vous sûr de vouloir créer un tableau de " << taille << " élements ? (o/n)" << std::endl;
		char réponse{'n'};
		std::cin >> réponse;

		// Si la réponse de l'utilisateur est autre chose que o on arrête.
		if (réponse != 'o') return 0;
	}

	std::cout << "Création du tableau..." << std::endl;

	// On utilise la fonction créer_tableau_bool pour créer notre tableau
	bool* tableau = créer_tableau_bool(taille);


	// On doit libérer l'espace mémoire
	free( (void*)tableau );
	tableau = nullptr;

	return 0;
}

// Définition de la fonction créer_tableau_bool
bool* créer_tableau_bool(const unsigned long long& taille) {

	if (taille < 1) {
		// Si la taille du tableau est 0 ça n'a pas d'intérêt d'allouer
		// de la mémoire. On renvoie donc un pointeur nul.
		return nullptr;
	}

	bool* pointeur = (bool*)malloc(taille * sizeof(bool));

	return pointeur;

	/*
		On aurai aussi pu écrire directement

			return (bool*)malloc(taille * sizeof(bool));
	
	*/
}
