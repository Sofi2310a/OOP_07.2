#include "Student.h"

Student::Student()
{
    name = " ";
    age = 18;
    year = 1;
}
Student::Student(string n, int a, int y)
{
    name = n;
    age = a;
    year = y;
}
//void Student::Input()
//{
//    cin >> name;
//    cin >> age;
//    cin >> year;
//}
//void Student::Output()
//{
//    cout << name << "\t" << age << "\t" << year << endl;
//}
void Student::SetName(string n) {
    name = n;
}
void Student::SetAge(int a) {
    age = a;
}
void Student::SetYear(int y) {
    year = y;
}

string Student::GetName() {
    return name;
}
int Student::GetAge() {
    return age;
}
int Student::GetYear() {
    return year;
}

Student operator++(Student& obj, int)
{
    Student temp = obj;
    obj.SetYear(obj.GetYear() + 1);
    return temp;
}

Student operator-(Student& obj)
{
    obj.SetYear(obj.GetYear() - 1);
    return obj;
}

Student& operator+=(Student& obj, int value)
{
    obj.SetAge(obj.GetAge() + value);
    return obj;
}

Student& operator-=(Student& obj, int value)
{
    obj.SetAge(obj.GetAge() - value);
    return obj;
}

ostream& operator<<(ostream& out, Student& obj)
{
    out << obj.GetName() << " " << obj.GetAge() << " " << obj.GetYear() << endl;
    return out;
}
istream& operator>>(istream& in, Student& obj)
{
    string name;
	int age, year;
	cout << "Enter name: ";
	in >> name;
	obj.SetName(name);
	cout << "Enter age: ";
	in >> age;
	obj.SetAge(age); 
	cout << "Enter year: ";
	in >> year;
	obj.SetYear(year);

	return in;
}