#include <stack>
#include <iostream>
using namespace std;

void escriure(bool palindrom) {
    if (palindrom) cout << "SI" << endl;
    else cout << "NO" << endl;
}



int main () {
    int size, n, num;
    cin >> size;
    stack<int> p;
    int aux = size;
    if (size%2 == 1) ++size;
    size /= 2;
    while (size > 0) {
        cin >> num;
        p.push(num);
        --size;
    }
    if (aux%2 == 1) p.pop();
    bool palindrom = true;
    while (not p.empty() and palindrom) {
        cin >> n;
        if (p.top() != n) {
            palindrom = false;
        }
        p.pop();
    }
    escriure(palindrom);
}