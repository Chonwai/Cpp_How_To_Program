#include <iostream>

using namespace std;

class GradeBook {
    public:
        void displayMessage() {
            cout << "Hello!" << endl;
        }
};

int main() {
    GradeBook gradebook1;
    gradebook1.displayMessage();
    return 0;
}