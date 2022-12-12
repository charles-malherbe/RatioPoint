/*
 * Created by Charles MALHERBE on 12/12/2022.
 */

#include "Ratio.h"

Ratio::PGCD(int n, int p) {
    int r;
    while (p != 0) {
        r = n % p;
        n = p;
        p = r;
    }
    return (n);
}

Ratio::reduire() {
    int pgcd = PGCD(numerateur, denominateur);
    numerateur /= pgcd;
    denominateur /= pgcd;
}

Ratio::Ratio(int n, int p) {
    numerateur = n;
    denominateur = p;
    reduire();
}

Ratio::Ratio(void) {
    numerateur = 0;
    denominateur = 1;
}

Ratio::Ratio(const Ratio &ratio) {
    numerateur = ratio.numerateur;
    denominateur = ratio.denominateur;
}

Ratio::~Ratio(void) {
    numerateur = 0;
    denominateur = 1;
}

Ratio &Ratio::operator=(const Ratio &ratio) {
    numerateur = ratio.numerateur;
    denominateur = ratio.denominateur;
    return (*this);
}

Ratio &Ratio::operator+(int n) {
    numerateur += n * denominateur;
    return (*this);
}

Ratio &Ratio::operator<<(std::ostream &flux) {
    flux << numerateur << "/" << denominateur;
    return (*this);
}

int Ratio::getNumerateur() const {
    return (numerateur);
}

int Ratio::getDenominateur() const {
    return (denominateur);
}

void Ratio::setNumerateur(int n) {
    numerateur = n;
}

void Ratio::setDenominateur(int d) {
    denominateur = d;
}
