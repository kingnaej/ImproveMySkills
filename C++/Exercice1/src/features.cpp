#include "features.hpp"
#include <iostream>
#include <algorithm>

void ajouterTache(std::string const &contenuTache, int const priorityTache,
                  std::vector<std::unique_ptr<Tache>> &listTaches)
{
    listTaches.push_back(std::make_unique<Tache>(contenuTache, priorityTache));
}

void afficherTaches(std::vector<std::unique_ptr<Tache>> const &listTaches)
{
    for (auto const &tache : listTaches)
    {
        std::cout << tache << "\n";
    }
}

void supprimerTache(std::string const &contenuTache, int const priorityTache,
    std::vector<std::unique_ptr<Tache>> &listTaches)
{
    listTaches.erase(std::remove_if(listTaches.begin(), listTaches.end(),
        [contenuTache, priorityTache](const std::unique_ptr<Tache> & t)
        {return t->getContenu() == contenuTache&& t->getPriority() == priorityTache;}), std::end(listTaches) );
}