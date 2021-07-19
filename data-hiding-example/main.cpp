#include <iostream>
#include "circle.h"

using namespace std;

int main() {
    Circle myCircle(5);

    cout << "Area is : " << myCircle.area() << endl;
    cout << "Perimeter is : " << myCircle.perimeter();

    return 0;
}
