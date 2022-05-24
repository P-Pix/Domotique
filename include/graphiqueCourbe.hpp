#pragma once

#define NOMBRE_HEURE    24
#define MAX_INDEX   NOMBRE_HEURE

#include <iostream>
#include <gtkmm-3.0/gtkmm.h>
#include <gtk-3.0/gtk/gtk.h>

class GraphiqueCourbe {
private:
    // indicateur de la position dans la liste, si le compteur est à 24 alors tout se décale d'un cran
    unsigned short m_remplissage = 0;

    // liste des 24 valeurs
    int m_listePointHeure[MAX_INDEX];

    // graphique
    Gtk:

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

    // Genere la courbe avec les données entrées dedans
    virtual void generateCourbe(void);

    // surcharge des <<
    friend std::ostream& operator<<(std::ostream &flux, GraphiqueCourbe g);
};