# Tous les fichiers source
file(GLOB SOURCES "*.cpp")

# Créer l’exécutable
add_executable(Exercice2 ${SOURCES}
        features.cpp
        historique.cpp)