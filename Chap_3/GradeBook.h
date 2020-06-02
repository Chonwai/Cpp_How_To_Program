#include <string>

using namespace std;

class GradeBook
{
private:
    string username;
    string courseName;

public:
    explicit GradeBook(string username);
    void setCourseName(string courseName);
    string getUserName();
    void printHello();
};