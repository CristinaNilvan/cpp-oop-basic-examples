#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    int labMark;
    int courseMark;

  public:
    Student(string name, float firstMark,float secondMark) {
        this->name = name;
        this->labMark = firstMark;
        this->courseMark = secondMark;
    }

    string GetName() {
        return name;
    }

    int GetMark(int markNumber) {
        if (markNumber == 1)
            return labMark;
        else
            return courseMark;
    }

    float CalculateCourseTotal() {
        return 0.4 * labMark + 0.6 * courseMark;
    }

  ~Student() = default;
};

int main() {
    Student myStudent("Amanda Jones", 9, 8);

    string name = myStudent.GetName();
    int firstMark = myStudent.GetMark(1);
    int secondMark = myStudent.GetMark(2);
    float courseTotal = myStudent.CalculateCourseTotal();

    cout << "Name : " << name << endl;
    cout << "Lab mark : " << firstMark << endl;
    cout << "Course mark : " << secondMark << endl;
    cout << "Course total : " << courseTotal;

    return 0;
}
