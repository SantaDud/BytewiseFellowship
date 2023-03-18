#pragma once
#include <string>

class Person
{
public:
    void SetName(std::string);
    std::string GetName();

private:
    std::string name;
};

void Person::SetName(std::string n)
{
    this->name = n;
}

std::string Person::GetName()
{
    return this->name;
}

class Student : public Person
{
public:
    void SetStudent(std::string, int);
    int GetMarks();

private:
    int marks;
};

void Student::SetStudent(std::string n, int m)
{
    this->marks = m;
    SetName(n);
}

int Student::GetMarks()
{
    return this->marks;
}