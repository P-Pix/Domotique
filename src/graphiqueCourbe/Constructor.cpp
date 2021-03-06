#include "../../include/graph/graphiqueCourbe.hpp"

GraphiqueCourbe::GraphiqueCourbe(void) {
    std::cout << "Generation de la class" << std::endl;
    for (int i = 0; i < MAX_INDEX; i++) {
        this->m_listePointHeure[i] = 0;
    }
    std::cout << "Class GraphiqueCourbe généré en adresse = " << this << std::endl;
}

GraphiqueCourbe::~GraphiqueCourbe(void) {
    std::cout << "Classe GraphiqueCourbe detruite en adresse = " << this << std::endl;
}

void GraphiqueCourbe::createGraph(void) {
    std::cout << "Création du graphique" << std::endl;
    std::string commande = "python3 python/graph.py " + this->listToString();
    system(commande.c_str());
    std::cout << "Graphique créé" << std::endl;
}

void GraphiqueCourbe::print(void) {
    std::cout << "[";
    int i;
    for (i = 0; i < MAX_INDEX -1; i++) {
        std::cout << this->m_listePointHeure[i] << ", ";
    }
    std::cout << this->m_listePointHeure[i] << "]" << std::endl;
}

std::ostream& operator<<(std::ostream &flux, GraphiqueCourbe g) {
    flux << "[";
    int i;
    for (i = 0; i < MAX_INDEX -1; i++) {
        flux << g.m_listePointHeure[i] << ", ";
    }
    flux << g.m_listePointHeure[i] << "]" << std::endl;
    return flux;
}