/*
 * Created by Charles MALHERBE on 12/12/2022.
 */

#include "PointCouleur.h"

PointCouleur::PointCouleur(double x, double y, unsigned int color) : Point (x, y) {
    this->color = color;
}

PointCouleur::toString() const {
    return Point::toString() + " Couleur";
}