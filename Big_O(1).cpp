#include <iostream>
using namespace std;

int main() {
    int x = 50;

    // O(1) operation: comparison
    if (x > 10) {
        cout << "x is greater than 10" << endl;
    } else {
        cout << "x is 10 or less" << endl;
    }

    return 0;
}
