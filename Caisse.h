#pragma once

#include "Planificateur.h"
#include "Commmande.h"

#include <string>
#include <vector>

class Caisse
{
private:
	int m_id;
	Commande m_commande;
	std::vector<IAbonne*> m_abonnes;
protected:
public:
	Caisse(int);
	void ajouterCommande();
	void ajouterItem(std::string);
	void abonner(IAbonne*);
	void desabonner(IAbonne*);
};

