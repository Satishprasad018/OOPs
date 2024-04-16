#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string Name;
    int Age;
    float Height;

public:
    Person()
    {
        Name = "Null";
        Age = 0;
        Height = 0.0f;
    }

    Person(string name, int age, float height){
        Name = name;
        Age = age;
        Height = height;
    }

    Person(Person &newObject_P){
        Name = newObject_P.Name;
        Age = newObject_P.Age;
        Height = newObject_P.Height;
    }

    void getData()
    {
        cout << "Name : " << Name << endl;
        cout << "age : " << Age << endl;
        cout << "height : " << Height << endl;
    }
};

int main(){

    Person p1;
    p1.getData();
    Person p2("Satish",21,5.2);
    p2.getData();
    Person p3(p2);
    p3.getData();


    return 0;
}