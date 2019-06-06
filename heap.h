#include <vector>
using namespace std;

class Heap {
private:
    vector<int> values;
    void sift_up();
    void sift_down();

public:
    Heap();
    Heap(vector<int> vals);
    void push(int val);
    void pop();
    int top();
};
