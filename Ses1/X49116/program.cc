#include <vector>
 using namespace std;
 
 struct parint {int prim, seg;};
 
 parint max_min1(const vector<int>& v) {
 /* Pre: v.size()>0 */
 /* Post: el primer componente del resultado es el valor maximo de v;
    el segundo componente del resultado es el valor minimo de v */
    int n = v.size();
    parint dos;
    int max = v[0], min = v[0];
    for (int i = 0; i < n; ++i) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }
    dos.prim = max;
    dos.seg = min;
    return dos;
 }
 
 pair<int,int> max_min2(const vector<int>& v)
 /* Pre: v.size()>0 */
 /* Post: el primer componente del resultado es el valor maximo de v;
 el segundo componente del resultado es el valor minimo de v */
 {
    int max = v[0], min = v[0];
    int n = v.size();
    pair<int,int> PAIR1;
    for (int i = 0; i < n; ++i) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }
    PAIR1.first = max;
    PAIR1.second = min;
    return PAIR1;
 }
 
 void max_min3(const vector<int>& v, int& x, int& y)
 /* Pre: v.size()>0 */
 /* Post: x es el valor maximo de v;  y es el valor minimo de v */
 {
    x = v[0];
    y = v[0];
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i] > x) x = v[i];
        if (v[i] < y) y = v[i];
    }
 }