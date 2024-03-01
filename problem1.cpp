#include <iostream>
#include <utility>
#include <vector>
using namespace std;


class Person{
    string firstName;
    string lastName;
    int age;

public:
    Person(string firstName, string lastName, int age){
        this->firstName=std::move(firstName);
        this->lastName=std::move(lastName);
        this->age=age;
    }
    Person(){}

    string getFirstName() const {
        return firstName;
    }

    void setFirstName(const string &firstName) {
        this->firstName = firstName;
    }

    string getLastName() const {
        return lastName;
    }

    void setLastName(const string &lastName) {
        this->lastName = lastName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }
};


int main() {
    Person p1=Person("Ayubxon", "Erkinov", 18);
    Person p2=Person("Mohammed", "Erkinoff", 18);
}
