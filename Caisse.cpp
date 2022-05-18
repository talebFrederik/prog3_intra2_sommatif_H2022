#include "Caisse.h"
#include "Commmande.h"

#include <algorithm>

Caisse::Caisse(int id) :  m_id{ id }{}

void Caisse::ajouterCommande()
{
	for (int i = 0; i < m_abonnes.size(); i++)
	{
		m_abonnes[i]->miseAJour(m_id, m_commande);
	}
	m_commande.items.clear();
}

void Caisse::ajouterItem(std::string item)
{
	m_commande.items.push_back(item);
}

void Caisse::abonner(IAbonne* abonne)
{
	m_abonnes.push_back(abonne);
}

void Caisse::desabonner(IAbonne* abonne)
{
	m_abonnes.erase(std::remove(m_abonnes.begin(), m_abonnes.end(), abonne), m_abonnes.end());
}
