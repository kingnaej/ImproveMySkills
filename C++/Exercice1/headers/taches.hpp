#pragma once

#include <string>

class Tache
{
public:
    Tache() = delete;
    Tache(const std::string &contenu, int priority);
    ~Tache() = default;

    [[nodiscard]] std::string getContenu() const;
    [[nodiscard]] int getPriority() const;

private:
    std::string const contenu;
    int const priority;
};
