#include <stack>
#include <iostream>
using namespace std;





int main () {
    char c;
    bool incorrecte = false;
    stack <char>ca;
    cin >> c;
    int n = 0;
    while (c != '.' and not incorrecte) {
        if (c == '(' or c == '[') ca.push(c);
        else {
            if (not ca.empty() and ca.top() == '(' and c == ')') ca.pop();
            else if (not ca.empty() and ca.top() == '[' and c == ']') ca.pop();
            else {
                ca.push(c);
                incorrecte = true;
            }
        }
        ++n;
        cin >> c;
    }
    if (ca.empty()) cout << "Correcte" << endl;
    else cout << "Incorrecte " << n << endl;
}