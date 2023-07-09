#include "Cjt_estudiants.hh"
using namespace std;

int main () {
    Cjt_estudiants conj1, conj2;
    conj1.llegir();
    conj2.llegir();
    for (int i = 1; i <= conj1.mida(); ++i) {
        Estudiant est1 = conj1.consultar_iessim(i);
        Estudiant est2 = conj2.consultar_iessim(i);
        if (est1.te_nota() and est2.te_nota()) {
            if (est1.consultar_nota() < est2.consultar_nota()) {
                conj1.modificar_iessim(i,est2);
            }
        }
        else if (est2.te_nota()) {
            conj1.modificar_iessim(i,est2);
        }
    }
    conj1.escriure();
}