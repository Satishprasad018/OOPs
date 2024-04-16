#include <iostream>
#include <string.h>
using namespace std;

class rectangle
{
protected:
    int length;
    int breadth;

public:
    rectangle(int length_a = 0, int breadth_a = 0)
    {
        length = length_a;
        breadth = breadth_a;
    }
    void printData()
    {
        cout << "Length :" << length << endl;
        cout << "Breadth :" << breadth << endl;
    }
};

class cuboid : protected rectangle
{
protected:
    int height;

public:
    cuboid(int length_a = 0, int breadth_a = 0, int height_a = 0) : rectangle(length_a, breadth_a)
    {
        height = height_a;
    }
    void calcArea()
    {
        cout << "Area of Cuboid :" << 2 * (length * breadth + breadth * height + length * height) << endl;
    }
    void calcVolume()
    {
        cout << "Volume of Cuboid :" << length * breadth * height << endl;
    }
    void printData()
    {
        cout << "Height :" << height << endl;
        ;
    }
};

int main()
{
    // rectangle R1(56, 77);
    cuboid C1(56,66,77);
    //R1.printData();
    //C1.printData();

    C1.calcVolume();
    C1.calcArea();
    return 0;
}