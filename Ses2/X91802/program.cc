 #include <iostream>
 #include "Estudiant.hh"
 #include <vector>
 using namespace std;

 pair<int,int>  max_min_vest(const vector<Estudiant>& v) {
 /* Pre: v no conte repeticions de dni  */
 /* Post: si existeix a v algun estudiant amb nota, la primera component del
    resultat es la posicio de l'estudiant de nota maxima de v i la segona
    component es la posicio de l'estudiant de nota minima de v (si hi ha
    empats, s'obte en cada cas la posicio de l'estudiant amb minim DNI); si no
    hi ha cap estudiant amb nota, totes dues components valen -1 */

    int n = v.size();
    int pos_max = -1;
    int pos_min = -1;
    int nota_max = -1, nota_min = 11;
    pair<int,int> p;
    for (int i = 0; i < n; ++i) {
      if (v[i].te_nota() and v[i].consultar_nota() > nota_max) {
         nota_max = v[i].consultar_nota();
         pos_max = i;
      }
      else if (v[i].te_nota() and v[i].consultar_nota() == nota_max) {
         if (v[i].consultar_DNI() < v[pos_max].consultar_DNI()) pos_max = i;

      }
      if (v[i].te_nota() and v[i].consultar_nota() < nota_min) {
         nota_min = v[i].consultar_nota();
         pos_min = i;
      }
      else if (v[i].te_nota() and v[i].consultar_nota() == nota_min) {
         if (v[i].consultar_DNI() < v[pos_min].consultar_DNI()) pos_min = i;
      }
    }
    p.first = pos_max;
    p.second = pos_min;
    return p;
}