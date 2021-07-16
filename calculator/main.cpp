#include <iostream>

using namespace std;

class Calculator {
private:
    float firstNumber;
    float secondNumber;

public:
    Calculator(float firstNumber, float secondNumber) {
        this->firstNumber = firstNumber;
        this->secondNumber = secondNumber;
    }

    float add() {
        return firstNumber + secondNumber;
    }

    float subtract() {
        return firstNumber - secondNumber;
    }

    float multiply() {
        return firstNumber * secondNumber;
    }

    float divide() {
        return firstNumber / secondNumber;
    }

    ~Calculator() = default;
};

int main() {
    Calculator object(4, 3);
    float result;

    result = object.add();
    cout << "Add the numbers : " << result << endl;

    result = object.subtract();
    cout << "Subtract the numbers : " << result << endl;

    result = object.multiply();
    cout << "Multiply the numbers : " << result << endl;

    result = object.divide();
    cout << "Divide the numbers : " << result << endl;

    return 0;
}
