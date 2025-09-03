#pragma once

#include <memory>
#include <string>
#include "historique.hpp"

class Compte {
public:
    Compte() = delete;
    Compte(std::string username, std::string password, float montant);
    ~Compte() = default;

    [[nodiscard]] std::string getUsername() const;
    [[nodiscard]] std::string getPassword() const;
    void depot(float const &montant);
    void retrait(float const &montant);
    void afficherHistorique(std::shared_ptr<Historique> const &historique) const;

private:
    std::shared_ptr<Historique> monHistorique;
    std::string username;
    std::string password;
    float montant;
};
