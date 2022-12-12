/*
 * Created by Charles MALHERBE on 12/12/2022.
 */

#ifndef TD09_POINT_H
#define TD09_POINT_H

#include <iostream>

class Point {
private:
    double x, y;
public:
    Point(double x = 0., double y = 0.);
    string toString() const;
}

#endif //TD09_POINT_H
