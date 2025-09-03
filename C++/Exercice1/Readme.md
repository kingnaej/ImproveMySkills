# Projet 1 : Gestionnaire de To-Do List (niveau débutant, comme ça une liste de courses)

### Description :

Crée une app console où tu ajoutes/supprimes des tâches, avec une priorité. C’est parfait pour pratiquer les conteneurs et RAII.
Exemple réel : Comme une app de notes sur ton téléphone – tu ajoutes “Faire les courses” avec priorité haute, et ça s’affiche trié. Pareto : 80% de l’utilité vient de 20% du code (la classe Tache et le vector).

### Checklist obligatoire :

- Implémente une classe Tache avec un constructeur qui utilise une liste d’initialisation (e.g., Tache(std::string desc, int prio) : description(desc), priorite(prio) {}).
- Utilise un std::vector<std::unique_ptr<Tache>> pour stocker les tâches (smart pointers pour RAII, pour gérer automatiquement la mémoire).
- Ajoute une fonction ajouterTache qui crée un unique_ptr et l’ajoute au vector.
- Implémente une fonction afficherTaches avec une boucle range-based for (C++11+).
- Gère la suppression avec erase et std::remove_if pour trier par priorité (utilise une lambda : [](const auto& t){ return t->priorite > 5; }).
- Bonus Pareto : Concentre 80% de ton temps sur les smart pointers – ça t’évitera 80% des fuites mémoire futures !