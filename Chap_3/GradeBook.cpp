#include <string>
#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name)
{
    username = name;
}
void GradeBook::setCourseName(string name)
{
    courseName = name;
}
string GradeBook::getUserName()
{
    return username;
}
void GradeBook::printHello()
{
    cout << "Hello, " << username << "!" << endl;
}
