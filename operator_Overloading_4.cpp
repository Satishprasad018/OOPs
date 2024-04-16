#include <iostream>
#include <string.h>
using namespace std;

class opov
{
private:
    int weight;
    string name;

public:
    opov(int weight_a = 0, string name_a = "Null")
    {
        weight = weight_a;
        name = name_a;
    }
    opov operator+(opov personObj)
    {
        opov temp;
        temp.weight = weight + personObj.weight;
        temp.name = name + personObj.name;
        return temp;
    }
    opov operator++()
    {
        ++weight;
    }
    opov operator++(int)
    {
        ++weight;
    }
    void printData()
    {
        cout << weight << endl;
        cout << name << endl;
        cout << "------------------------------------" << endl;
    }
};

int main()
{

    opov person1(51, "satish");
    opov person2(45, "ayan");
    opov total;

    total = person1 + person2;
    total.printData();

    ++person1;
    person2++;

    person1.printData();
    person2.printData();

    return 0;
}