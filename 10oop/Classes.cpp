#include "Classes.h"

Human::Human(string surname_in, string name_in, string midname_in, int age_in)
{
	surname = surname_in;
	name = name_in;
	midname = midname_in;
	age = age_in;
}

Human::Human() {};

Human::~Human() {};

Student::Student(string surname_in, string name_in, string midname_in, int age_in, bool on_lesson_in) :Human(surname_in, name_in, midname_in, age_in)
{
	on_lesson = on_lesson_in;
}

Student::Student() {};

Student::~Student() {};

void Student::print()
{
	cout << "Name: " << name << endl << "Surname: " << surname << endl << "Midname: " << midname << endl << "Age: " << age << endl << "On lesson: " << on_lesson << endl;
}

Boss::Boss(string surname_in, string name_in, string midname_in, int age_in, int number_of_works_in) :Human(surname_in, name_in, midname_in, age_in)
{
	number_of_works = number_of_works_in;
}

Boss::Boss() {};

Boss::~Boss() {};

void Boss::print()
{
	cout << "Name: " << name << endl << "Surname: " << surname << endl << "Midname: " << midname << endl << "Age: " << age << endl << "Number of works: " << number_of_works << endl;
}