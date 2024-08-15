#include <iostream>


int main() {

    bool continuer{true};

    while (continuer) {

        int nombre1{0};
        int nombre2{0};
        std::cout << "Entrez le premier nombre :" << std::endl;
        std::cin >> nombre1;
        std::cout << "Entrez le second nombre :" << std::endl;
        std::cin >> nombre2;

        std::cout << "Le résultat de l'opération " << nombre1 << "+" << nombre2 << " est " << nombre1 + nombre2 << std::endl;


        std::cout << "Voulez-vous fermer le programme ? (o/n)" << std::endl;
        char réponse;
        std::cin >> réponse;

        if (réponse == 'o') {
            continuer = false;
        }

    }

    return 0;
}
