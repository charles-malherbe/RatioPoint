/*
 * Created by Charles MALHERBE on 12/12/2022.
 */

#ifndef TD09_RATIO_H
#define TD09_RATIO_H

#include <iostream>

class Ratio {
    private:
    int numerateur;
    int denominateur;
    int PGCD () const;
    void reduire ();
public:
    Ratio (int n, int p);
    Ratio (void);
    Ratio (const Ratio &ratio);
    ~Ratio (void);
    Ratio &operator= (const Ratio &ratio);
    Ratio &operator+ (int n);
    Ratio &operator<< (std::ostream &flux);
    int getNumerateur () const;
    int getDenominateur () const;
    void setNumerateur (int);
    void setDenominateur (int);
};

#endif //TD09_RATIO_H
