#pragma once

#define MAX_INDEX   24

#include <iostream>

class GraphiqueCourbe {
private:
    // indicateur de la position dans la liste, si le compteur est à 24 alors tout se décale d'un cran
    short m_remplissage = 0;
    // liste des 24 valeurs
    int m_listePointHeure[24];

    // ajoute la valeure tout en déplaçant de une case
    void addMooving(int value);

public:
    // Constructeur par defaut
    GraphiqueCourbe(void);

    // ajoute une valeur à la liste si elle est pleine elle est décalé d'un cran et ajoute à la fin la valeur
    void addValue(int value);
    
    // supprime la valeur à l'index désiré puis décale le tout
    void removeValue(int index);

    // Visualisation du contenu de la liste
    void print(void);

    // surcharge des <<
    friend std::ostream& operator<<(std::ostream &flux, GraphiqueCourbe g);
};