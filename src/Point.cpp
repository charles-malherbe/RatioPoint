/*
 * Created by Charles MALHERBE on 12/12/2022.
 */

#include "Point.h"

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point::toString() const {
    return "Point";
}