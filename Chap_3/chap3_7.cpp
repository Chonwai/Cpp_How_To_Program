#include <iostream>
#include "GradeBook.h"

using namespace std;

int main() {
    GradeBook gradeBook1("Edison");
    gradeBook1.printHello();
    gradeBook1.setCourseName("C++ How to Program");
    cout << gradeBook1.getUserName() << endl;
    return 0;
}