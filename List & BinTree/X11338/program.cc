#include "BinTree.hh"
#include "ParInt.hh"

//Pre: a = A//
//Post: a es com a A amb k sumat al segon component de cada node//
void sumak(BinTree<ParInt>& a, int k) {
    if (not a.empty()) {
        ParInt t(a.value().primer(), a.value().segon()+ k);
        BinTree<ParInt> left = a.left();
        sumak(left, k);
        BinTree<ParInt> right = a.right();
        sumak(right, k);
        a = BinTree<ParInt> (t, left, right);
    }
}