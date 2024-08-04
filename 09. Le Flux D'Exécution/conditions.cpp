#include <iostream>



int main() {

    std::cout << "Quel âge avez-vous ?" << std::endl;

    int âge{0};
    std::cin >> âge;

    if ( âge < 0 ) std::cout << "Bonjour visiteur du futur !" << std::endl;
    else if ( âge < 12 ) std::cout << "Vous êtes un enfant." << std::endl;
    else if ( âge < 18 ) std::cout << "Vous êtes un adolescent." << std::endl;
    else if (âge < 80) std::cout << "Vous êtes dans la moyenne." << std::endl;
    else if (âge < 100) std::cout << "Vous êtes âgé." << std::endl;
    else if (âge < 120) std::cout << "On peut dire que vous avez vu des tas de choses !" << std::endl;
    else {
        std::cout << âge << " ans... Mais oui bien sûr..." << std::endl;
    }

    /**
     * Europe : 1
     * Afrique : 2
     * Asie : 3
     * Océanie : 4
     * Amérique : 5
     * Antarctique : 6
     * Autre : 7
     */

    int continent{0};
    std::cout << "De quel continent venez-vous ?" << std::endl;
    std::cout << "(1) Europe" << std::endl;
    std::cout << "(2) Afrique" << std::endl;
    std::cout << "(3) Asie" << std::endl;
    std::cout << "(4) Océanie" << std::endl;
    std::cout << "(5) Amérique" << std::endl;
    std::cout << "(6) Antarctique" << std::endl;
    std::cout << "(7) Autre" << std::endl;
    std::cin >> continent;

    if (continent == 1){
        std::cout << "J'aime les pizzas !" << std::endl;
    } else if (continent == 2){
        std::cout << "J'aime le couscous !" << std::endl;
    } else if (continent == 3){
        std::cout << "J'aime les sushis !" << std::endl;
    } else if (continent == 4){
        std::cout << "J'aime les kangourous !" << std::endl;
    }  else if (continent == 5){
        std::cout << "J'aime les burgers !" << std::endl;
    }  else if (continent == 6){
        std::cout << "J'aime la glace !" << std::endl;
    } else {

        int alien{0};
        std::cout << "Êtes-vous un alien ?" << std::endl;
        std::cout << "(1) Oui" << std::endl;
        std::cout << "(2) Non" << std::endl;
        std::cin >> alien;

        if (alien == 1) {
            std::cout << "Pas étonnant vu votre tête !" << std::endl;
        }

    }

    return 0;
}
