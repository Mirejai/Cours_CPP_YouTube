// On inclu le fichier standard iostream
#include <iostream>

int main(){

    // Nombres de fruits
    int nombre_de_pommes{5};
    int nombre_de_poires{4};
    int nombre_de_bananes{9};
    int nombre_d_abricots{8};
    int nombre_de_peches{2};

    // Total de fruit dans le panier
    int total{0};

    // On enlève deux bananes
    nombre_de_bananes -= 2;
    // On rajoute une pèche
    nombre_de_peches++;

    // On double le nombre de poires
    nombre_de_poires *= 2;
    // On divise par 2 le nombre d'abricot
    nombre_d_abricots /= 2;

    // On calcul le total
    total = nombre_de_pommes + nombre_de_poires + nombre_de_bananes + nombre_d_abricots + nombre_de_peches;

    // On veut rajouter 3 melon
    int nombre_de_melons{3};

    // On ajoute les melons dans le panier
    total += nombre_de_melons;

    // On enlève les bananes du panier
    total -= nombre_de_bananes;
    nombre_de_bananes = 0;

    // On affiche le nombre de melon dans la console
    std::cout << "Nombre de melons : " << nombre_de_melons << std::endl;

    return 0;
}
