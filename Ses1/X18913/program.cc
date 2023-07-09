#include <iostream>
#include <vector>
using namespace std;
 int busqueda_lin(const vector<int>& v, int x) {
 /* Pre: cierto */
 /* Post: si el resultado es v.size(), x no esta en v;
    en caso contrario, indica la posicion de la primera aparicion de x en v */
  int n = v.size();
  for (int i = 0; i < n; ++i) {
    if (v[i] == x) return i;
  }
  return n;
 }