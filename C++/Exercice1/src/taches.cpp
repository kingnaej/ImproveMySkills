#include "taches.hpp"

Tache::Tache(const std::string &contenu, const int priority) : contenu(contenu), priority(priority)
{}

std::string Tache::getContenu() const
{
    return this->contenu;
}

int Tache::getPriority() const
{
    return this->priority;
}