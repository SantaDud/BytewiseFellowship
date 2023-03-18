// Random Bad Code
#include "Class.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Student> students;
    int numberOfStudents;
    
    std::cout << "Enter the number of students: ";
    std::cin >> numberOfStudents;
    
    for (int i = 0; i < numberOfStudents; i++)
    {
        Student student;
        int marks;
        std::string name;
    
        std::cout << "Enter the name of the student: ";
        std::cin >> name;
    
        std::cout << "Enter the marks of the student: ";
        std::cin >> marks;
    
        student.SetStudent(name, marks);
        students.push_back(student);
    }
    
    int sum = 0;
    
    for (int i = 0; i < numberOfStudents; i++)
    {
        std::cout << "Name: " << students[i].GetName() << std::endl;
        std::cout << "Marks: " << students[i].GetMarks() << std::endl << std::endl;
        sum += students[i].GetMarks();
    }

    std::cout << "The sum is " << sum << " and the average marks are " << sum / numberOfStudents << "." << std::endl;
}