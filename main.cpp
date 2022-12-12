/*
 * Created by Charles MALHERBE on 12/12/2022.
 */

#include "Point.h"
#include "Ratio.h"

int main() {
    startPointTests();
    startRatioTests();
    startPointCouleurTests();
    return (0);
}

void startRatioTests(void) {
    /* START RATIO TESTS */
    Ratio constructor_full = Ratio(5/5);
    Ratio constructor_empty = Ratio();
    Ratio constructor_copy = constructor_full;
    Ratio constructor_copy2 = Ratio(constructor_full);
    Ratio constructor_add = constructor_full + 5;
    std::cout << constructor_full << std::endl;
    std::cout << constructor_full.getNumerateur() << std::endl;
    std::cout << constructor_full.getDenominateur() << std::endl;
    std::cout << constructor_full.setNumerateur(8) << std::endl;
    std::cout << constructor_full.setDenominateur(8) << std::endl;
    /* END RATIO TESTS */
}

void startPointTests(void) {
    /* START POINT TESTS */
    Point constructor_full = Point(5.99, 5.99);
    std::cout << constructor_full.toString() << std::endl;
    std::cout << constructor_full << std::endl;
    /* END POINT TESTS */
}

void startPointCouleurTests(void) {
    /* START POINT COULEUR TESTS */
    PointCouleur constructor_full = PointCouleur(5.99, 5.99, 0x000000);
    std::cout << constructor_full.toString() << std::endl;
    std::cout << constructor_full << std::endl;
    /* END POINT COULEUR TESTS */
}