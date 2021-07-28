#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    float labMark;
    float courseMark;

public:
    Student(string name, float labMark, float courseMark) {
        this->name = move(name);
        this->labMark = labMark;
        this->courseMark = courseMark;
    }

    string GetName() {
        return name;
    }

    float GetMark(int markNumber) const {
        if (markNumber == 1)
            return labMark;
        else
            if (markNumber == 2)
                return courseMark;

        return 0;
    }

    float CalculateCourseTotal() const {
        return (float)(0.4 * labMark + 0.6 * courseMark);
    }

    ~Student() = default;
};

int main() {
    Student myStudent("Amanda Jones", 9, 8);

    string name = myStudent.GetName();
    float firstMark = myStudent.GetMark(1);
    float secondMark = myStudent.GetMark(2);
    float courseTotal = myStudent.CalculateCourseTotal();

    cout << "Name : " << name << endl;
    cout << "Lab mark : " << firstMark << endl;
    cout << "Course mark : " << secondMark << endl;
    cout << "Course total : " << courseTotal;

    return 0;
}
