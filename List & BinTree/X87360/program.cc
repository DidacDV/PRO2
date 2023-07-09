 #include <list>
 using namespace std;
 
 void inter(list<int>& uno, const list<int>& dos ) {
 /* Pre: uno = U */
 /* Post: uno pasa a ser la interseccion de U y dos */
    list <int>::iterator it = uno.begin();
    list <int>::const_iterator it2 = dos.begin();
        while (it != uno.end()) {
        if (it2 == dos.end()) it = uno.erase(it);
        else {
            if (*it < *it2) it = uno.erase(it);
            else if (*it > *it2) ++it2;
            else {
                ++it;
                ++it2;
            }
        }
    }
 }