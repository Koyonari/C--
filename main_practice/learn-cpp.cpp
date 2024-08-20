// Inheritance
#include <iostream>
using std::cout;
using std::cin;
using std::string;

// Parent class
class Animal {
    public:
        bool alive = true;

        void speak() { 
            cout << "Grrrr\n"; 
        }

        void eat() {
            cout << "Nom nom nom\n";
        }

};

// Child class
class Dog: public Animal {
    public:
        string breed;

        void bark() {
            cout << "Woof Woof\n";
        }
};

int main() {
    Dog dog;
    Animal animal;

    cout << "Animal class\n";
    cout << animal.alive << "\n";
    animal.speak();
    animal.eat();

    // Dog class inherits from Animal class
    cout << "\nDog class\n";
    cout << dog.alive << "\n";
    dog.bark();
    dog.speak();
    dog.eat();

    return 0;
}