#include "features.hpp"

int main() {

    std::vector<std::unique_ptr<Tache>> listTaches;

    ajouterTache("Aller a la maison", 4, listTaches);
    ajouterTache("Dormir tot", 7, listTaches);
    ajouterTache("Se reveiller a 3H pour bosser", 9, listTaches);
    ajouterTache("Jouer au basket apres les cours de licence 3", 5, listTaches);
    ajouterTache("Manger vite", 3, listTaches);
    ajouterTache("Charger mon telephone", 4, listTaches);

    afficherTaches(listTaches);

    supprimerTache(listTaches);
    return 0;
}