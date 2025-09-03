#include "compte.hpp"

#include <utility>

Compte::Compte(std::string username, std::string password, float montant) :
username(std::move(username)), montant(montant), password(std::move(password))
{}

void Compte::depot(float const &montant) {
    std::string const type = "depot";
    this->montant += montant;
    this->monHistorique->ajouterTransaction(montant, type);
}

void Compte::retrait(float const &montant) {
    std::string const type = "retrait";
    this->montant -= montant;
    this->monHistorique->ajouterTransaction(montant, type);
}

void Compte::afficherHistorique(std::shared_ptr<Historique> const &historique) const {
    this->monHistorique->afficherTransaction();
}

std::string Compte::getUsername() const {
    return this->username;
}

std::string Compte::getPassword() const {
    return this->password;
}

