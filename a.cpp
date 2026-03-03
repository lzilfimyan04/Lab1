#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Running file A" << endl;

    if (argc > 1) {
        cout << "User output: " << argv[1] << endl;
    }

    return 0;
}
