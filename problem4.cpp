#include <iostream>
#include <vector>
using namespace std;


class Animal{
protected:
    int energy=50;

public:
    int getEnergy() const {
        return energy;
    }

    void sleep(){
        cout<<"I am sleeping\n";
        energy++;
    }

    void eat(){
        cout<<"I am eating\n";
        energy++;
    }

};


class Dog: public Animal{
private:
    string name;
public:
    explicit Dog(const string &name) : name(name) {}

    void bark(){
        cout<<"Bark!\n";
        energy--;
    }

    void run(){
        cout<<"Running!\n";
        energy-=3;
    }
};


int main() {
    Dog dog1("Max");
    for(int i=4;i<9;i++){
        dog1.Animal::sleep();
        dog1.run();
    }
    dog1.eat();
    dog1.bark();
    cout<<dog1.getEnergy()<<endl;
}
