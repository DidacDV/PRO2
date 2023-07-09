#include "Estudiant.hh"
#include <vector>

 void arrodonir_vector(vector<Estudiant>& v) {
   /* Pre: cert */
   /* Post: els estudiants de v amb nota passen a tenir la seva nota arrodonida
 a la decima mes propera */
    int n = v.size();
    if (v[0].te_nota()) {
    for (int i = 0; i < n; ++i) {
            v[i].modificar_nota (((int)(10.*(v[i].consultar_nota()+.05)))/10.);
        }
    }
 }