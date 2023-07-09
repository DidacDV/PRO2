#include <stack>
#include <vector>
#include <iostream>
using namespace std;

void evaluar (int moviment, vector<stack<string>>&v) {
    if (moviment == -1) {
         string titol;
        int categoria;
        cin >> titol;
        cin >> categoria;
        v[categoria - 1].push(titol);
    }
    if (moviment == -2) {
        int categoria;
        int retirar;
        cin >> retirar;
        cin >> categoria;
        while (retirar > 0) {
            v[categoria - 1].pop();
            --retirar;
        }
    }
    if (moviment == -3) {
        int categoria;
        cin >> categoria;
        cout << "Pila de la categoria " << categoria << endl;
        stack <string> copy(v[categoria - 1]);

        while (not copy.empty()) {
            cout << copy.top() << endl;
            copy.pop();
        }
        cout << endl;
    }
}


int main () {
    int n;
    cin >> n;
    vector <stack<string>> v(n);
    int moviment;
    cin >> moviment;
    while (moviment != -4) {
        evaluar(moviment,v);
        cin >> moviment;
    }
}