#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int age;
    int year;

public:
    Student();
    Student(string n, int a, int y);
    void Input();
    void Output();
    void SetName(string n);
    void SetAge(int a);
    void SetYear(int y);
    string GetName();
    int GetAge();
    int GetYear();
    friend ostream& operator<<(ostream& out, Student& obj);
    friend istream& operator>>(istream& in, Student& obj);
};

Student operator++(Student& obj, int);
Student operator-(Student& obj);
Student& operator+=(Student& obj, int value);
Student& operator-=(Student& obj, int value);