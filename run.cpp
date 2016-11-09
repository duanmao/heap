#include <iostream>
#include "heap.h"
using namespace std;

int main() {
    Heap h = Heap(1);
    // h.insert(3);
    // h.insert(0);
    // int top = h.top();
    // h.remove(2);
    // h.remove(1);
    cout << h.top() << endl;
    return 0;
}
