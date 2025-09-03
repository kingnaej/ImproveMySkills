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
    int numero = 1;
    for (auto const &tache : listTaches)
    {
        std::cout << numero << "-" << tache->getContenu() << ", Priority : " << tache->getPriority() << "\n";
        numero++;
    }
}

void supprimerTache(std::vector<std::unique_ptr<Tache>> &listTaches)
{
    listTaches.erase(std::ranges::remove_if(listTaches,
        [](const std::unique_ptr<Tache> & t) { return  t->getPriority() > 5;}).begin(),
        std::end(listTaches) );
    std::cout << "\n=============TACHES RESTANTES===================\n" << std::endl;
    afficherTaches(listTaches);
}