#include <iostream>
#include "heap.h"
using namespace std;

int main() {
    Heap h = Heap();
    // assume it's a small heap
    h.push(1);
    h.push(3);
    assert(h.top() == 1);
    h.push(0);
    int top = h.top();
    assert(top == 0);
    h.pop();
    assert(h.top() == 1);
    h.pop();
    assert(h.top() == 3);
    cout << h.top() << endl;
    return 0;
}
