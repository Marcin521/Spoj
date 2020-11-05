//
// Created by Marcin on 04.11.2020.
//

#ifndef ELEMENTARYSCHOOL_STUDENT_H
#define ELEMENTARYSCHOOL_STUDENT_H

#include <string>

using namespace std;

class Student {
    string name;
    string surname;
    float average;

    public:

    string getName();
    string getSurname();
    float getAverage();

    Student(string, string, float);
    ~Student();

};


#endif //ELEMENTARYSCHOOL_STUDENT_H
