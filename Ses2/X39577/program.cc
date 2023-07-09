#include "Estudiant.hh"
#include <vector>
using namespace std;






int main () {
    int m, n, s,dn, pos;
    cin >> m >> n >> s;
    vector <int> ve(n,0);
    for (int i = 0; i < s; ++i) {
        cin >> pos;
        ve[pos - 1] = 1;
    }
    double num = 0.0;
    vector <Estudiant> v(m);
    for (int i = 0; i < m; ++i) {
        double total = 0;
        cin >> dn;
        Estudiant Didac (dn);
        v[i] = Didac;
        for (int j = 0; j < n; ++j) {
            cin  >> num;
            if (ve[j] == 1) total += num;
        }   
        total = total/s;
        v[i].afegir_nota(total);
        v[i].escriure();
    }
}