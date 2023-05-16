#ifndef TIGER_H
#define TIGER_H

#include <string>

class Tiger
{
    std::string name;
    int age;  // Private member variable

public:
    // Constructors
    Tiger();
    Tiger(int age, std::string name);
    ~Tiger();

    // Getters
    std::string getName();
    int getAge();  // Getter for age

    // Setters
    void setName(std::string newName);
    void setAge(int newAge);  // Setter for age

    void eatFood();
};

#endif
