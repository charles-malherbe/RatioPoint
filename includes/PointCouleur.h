/*
 * Created by Charles MALHERBE on 12/12/2022.
 */

#ifndef TD09_POINT_COULEUR_H
#define TD09_POINT_COULEUR_H

#include <iostream>

class PointCouleur extends Point {
    private:
        double x, y;
        unsigned int color;
    public:
        PointCouleur(double x, double y, unsigned int color);
        override string toString() const;
};

#endif //TD09_POINT_COULEUR_H
