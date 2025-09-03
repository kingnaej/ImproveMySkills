#pragma once

#include <string>
#include "taches.hpp"
#include <memory>
#include <vector>

void ajouterTache(std::string const &contenuTache, int const priorityTache,
    std::vector<std::unique_ptr<Tache>> &listTaches);
void afficherTaches(std::vector<std::unique_ptr<Tache>> const &listTaches);
void supprimerTache(std::vector<std::unique_ptr<Tache>> &listTaches);