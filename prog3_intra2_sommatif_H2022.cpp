#include <iostream>
#include <vector>
#include <string>

#include "Caisse.h"
#include "Planificateur.h"

int main()
{
    std::vector<std::string> items{ "Delicious beverage", "Le Big Mac", "Big Kahuna Burger", "Glass of beer", "Royal with cheese" };

    Caisse caisse1{ 1 };
    Caisse caisse2{ 2 };
    Caisse caisse3{ 3 };

    Planificateur planif;

    caisse1.abonner(&planif);
    caisse2.abonner(&planif);
    caisse3.abonner(&planif);

    caisse1.ajouterItem(items[0]);
    caisse1.ajouterItem(items[2]);
    caisse1.ajouterCommande();

    caisse1.ajouterItem(items[3]);
    caisse1.ajouterItem(items[0]);
    caisse1.ajouterItem(items[1]);
    caisse1.ajouterCommande();

    caisse1.ajouterItem(items[3]);
    caisse1.ajouterItem(items[4]);
    caisse1.ajouterCommande();

    caisse2.ajouterItem(items[0]);
    caisse2.ajouterItem(items[1]);
    caisse2.ajouterCommande();

    caisse2.ajouterItem(items[3]);
    caisse2.ajouterItem(items[2]);
    caisse2.ajouterCommande();

    caisse3.ajouterItem(items[0]);
    caisse3.ajouterItem(items[4]);
    caisse3.ajouterCommande();

    caisse3.ajouterItem(items[0]);
    caisse3.ajouterItem(items[4]);
    caisse3.ajouterItem(items[3]);
    caisse3.ajouterItem(items[1]);
    caisse2.ajouterCommande();

    planif.ajouterCaisse(1);
}

