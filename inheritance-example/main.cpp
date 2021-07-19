#include <iostream>
#include <string>

using namespace std;

class Animal {
   string name;
   string sound;

public:
    Animal() {
        name = "";
        sound = "";
    }

    Animal(string givenName, string givenSound) {
        name = givenName;
        sound = givenSound;
    }

    void Animal_Detail() {
        cout << "Name : " << name << endl;
        cout << "Sound : " << sound << endl;
    }
};

class Dog : public Animal {
    string family;

public:
    Dog() {
        family = "Carnivores";
    }

    Dog(string givenName, string givenSound) : Animal(givenName, givenSound) {
        family = "Carnivores";
    }

    void Dog_Detail() {
        Animal_Detail();
        cout << "Family : " << family << endl;
    }
};

class Sheep : public Animal {
    string color;

public:
    Sheep() {
        color = "White";
    }

    Sheep(string givenName, string givenSound) : Animal(givenName, givenSound) {
        color = "White";
    }

    void Sheep_Detail() {
        Animal_Detail();
        cout << "Color : " << color << endl;
    }
};

int main() {
    Dog myDog("Pongo", "Woof Woof");
    myDog.Dog_Detail();

    cout << endl;

    Sheep mySheep("Billy", "Beheehee");
    mySheep.Sheep_Detail();

    return 0;
}
