# Tous les fichiers source
file(GLOB SOURCES "*.cpp")

# Créer l’exécutable
add_executable(Exercice1 ${SOURCES}
        features.cpp)