# Projet 2 : Simulateur de Compte Bancaire (niveau intermédiaire, avec gestion de ressources)

### Description :

Une app qui simule un compte bancaire : dépôts, retraits, et historique. Idéal pour RAII et exceptions.
Exemple réel : Comme une mini-banque en ligne – tu déposes 100€, retires 50€, et ça vérifie si tu as assez d’argent 
(sinon, erreur !). Pareto : 80% des bugs évités viennent de 20% du code (gestion des exceptions et RAII).

### Checklist obligatoire :

- Crée une classe Compte avec un membre std::shared_ptr<Historique> (shared_ptr pour partager l’historique entre fonctions).
- Utilise RAII dans le constructeur/destructeur : e.g., alloue l’historique dans le ctor et libère dans le dtor
(mais les smart pointers gèrent ça auto !).
- Implémente depot(float montant) et retrait(float montant) qui lancent une std::runtime_error si solde négatif (utilise throw et try-catch).
- Ajoute une fonction afficherHistorique qui utilise std::for_each avec une lambda pour itérer sur un std::vector<Transaction>.
- Utilise des listes d’initialisation pour les structs comme Transaction { float montant; std::string type; }.
- Bonus Pareto : Mets 80% d’effort sur les exceptions – ça couvrira 80% des cas d’erreurs dans des projets plus complexes comme Vulkan.