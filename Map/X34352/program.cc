#include <map>
#include <iostream>
using namespace std;


int main() {
    map<string, int> d;
    char c;
    string s;
    while (cin >> c) {
        cin >> s;
        if (c == 'a') ++d[s];
        else cout << d[s] << endl;
    }
}