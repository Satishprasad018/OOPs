#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    string name;
    int id;
    int age;
    string department;

public:
    student(string name_a = "Null", int id_a = 0, int age_a = 0, string department_a = "Null")
    {
        name = name_a;
        id = id_a;
        age = age_a;
        department = department_a;
    }
    student(student &studentObj)
    {
        //name = name_a;
        id = studentObj.id;
        age = studentObj.age;
        department = studentObj.department;
    }
    void printData()
    {
        cout << "Name :" << name << endl;
        cout << "ID :" << id << endl;
        cout << "age :" << age << endl;
        cout << "Department :" << department << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main()
{
    student ayan;
    student satish("Satish", 18, 21, "CSBS");
    ayan.printData();
    satish.printData();

    student altaf(satish);
    altaf.printData();

    return 0;
}