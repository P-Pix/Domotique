#include "../../include/graph/graphiqueCourbe.hpp"

void GraphiqueCourbe::addValue(int value) {
    if (this->m_remplissage == MAX_INDEX) {
        std::cout << "La liste est pleine" << std::endl;
        this->addMooving(value);
    } else {
        std::cout << "La liste est non pleine" << std::endl;
        this->m_listePointHeure[this->m_remplissage] = value;
        this->m_remplissage++;
    }
    std::cout << "Valeur " << value << " ajouté à la liste" << std::endl;
}

std::string GraphiqueCourbe::listToString(void) {
    std::string liste;
    int i;
    for (i = 0; i < MAX_INDEX; i++) {
        liste += std::to_string(this->m_listePointHeure[i]);
        liste += " ";
    }
    return liste;
}

void GraphiqueCourbe::addMooving(int value) {
    int i;
    for (i = 1; i < this->m_remplissage + 1; i++) {
        this->m_listePointHeure[i - 1] = this->m_listePointHeure[i];
    }
    std::cout << "i = " << i << std::endl;
    this->m_listePointHeure[i - 1] = value;
}

void GraphiqueCourbe::removeValue(int index) {
    if (index > this->m_remplissage) {
        std::cerr << "Erreur index supérieur au niveau de la liste actuelle" << std::endl;
        return;
    }
    std::cout << "Suppression de la valeur " << this->m_listePointHeure[index] << " en possition " << index << std::endl;
    int i;
    this->m_remplissage--;
    for (i = index + 1; i < this->m_remplissage + 1; i++) {
        this->m_listePointHeure[i - 1] = this->m_listePointHeure[i];
    }
    for (i = i - 1; i < MAX_INDEX; i++) {
        this->m_listePointHeure[i] = 0;
    }
    std::cout << "Valeur supprimé" << std::endl;
}