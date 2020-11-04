//
// Created by Marcin on 04.11.2020.
//

#include "Student.h"
Student::Student(string n, string s, float a)
{
    name=n;
    surname=s;
    average=a;
}

Student::getName()
{
    return name;
}

Student::getSurname()
{
    return surname;
}

Student::getAverage()
{
    return average;
}



Student::~Student();