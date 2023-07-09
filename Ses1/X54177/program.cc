#include <iostream>
using namespace std;

int main () {
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        int y = 0;
        int z;
        cin >> z;
        while ( z != x) {
            y += z;
            cin >> z;
        }
        string s;
        if (z == x) getline(cin, s);
        cout << "La suma de la secuencia " << i << " es " << y << endl;
    }
}