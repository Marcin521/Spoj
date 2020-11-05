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

string Student::getName()
{
    return name;
}

string Student::getSurname()
{
    return surname;
}

float Student::getAverage()
{
    return average;
}



Student::~Student(){}