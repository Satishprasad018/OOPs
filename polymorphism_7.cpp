#include <iostream>
using namespace std;

class basicCar
{
public:
  void body(){};
  void door(){};
  void tyres(){};
};

class advCar : public basicCar
{
public:
  void ABS(){};
  void PS(){};
  void AT(){};
};

int main()
{
  basicCar b1;
  advCar a1;

  basicCar *ptr;
  ptr = &a1;

  ptr->body();
  ptr->door();
  ptr->tyres();

  // ptr->ABS();
  // ptr->PS();
  // ptr->AT();
}