#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of terms
    int start = 11;
    int diff = 4;

    cout << "Sequence: ";

    for (int i = 0; i < n; i++) {
        int root = start + i * diff;
        int term = root * root; // square it
        cout << term << " ";
    }

    return 0;
}

 
