#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printVector(const vector<int> &);
void assignVector(vector<int> &);

int main() {
    vector<int> vector1(7);
    assignVector(vector1);
    printVector(vector1);
    return 0;
}

void printVector(const vector<int> &items) {
    for (int item : items) {
        cout << item << " ";
    }
    cout << endl;
}

void assignVector(vector<int> &items) {
    for (int &item : items) {
        cin >> item;
    }
}