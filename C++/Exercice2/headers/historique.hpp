#pragma once

#include <string>
#include <vector>
#include <iostream>

struct transaction {
    float montant;
    std::string const &type;
};

class Historique {
public:
    Historique() = delete;
    Historique(transaction newTransaction);
    ~Historique() = default;
    void ajouterTransaction(float const &montant, std::string const &type);
    void afficherTransaction() const;
private:
    std::vector<transaction> mesTransactions;
};