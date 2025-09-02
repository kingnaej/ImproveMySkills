#include <iostream>
#include "features.hpp"

int main() {

    std::vector<std::unique_ptr<Tache>> listTaches;
    Tache gotToHome("Aller à la maison", 4);
    Tache Sleep("Dormir tot", 7);
    Tache studyTomorrow("Se reveiller a 3H pour bosser", 9);
    Tache sport("Jouer au basket apres les cours de licence 3", 5);

    ajouterTache("Manger vite", 3, listTaches);
    ajouterTache("Charger mon telephone", 4, listTaches);
    afficherTaches(listTaches);


    return 0;
}