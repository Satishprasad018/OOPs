#include <iostream>
using namespace std;

class Alpha
{
private:
  int a;
  int b;

public:
  static int stat;
  Alpha()
  {
    a = 5;
    b = 10;
    stat++;
  };
};
int Alpha ::stat = 0;
int main()
{
  cout << Alpha::stat << endl;
  Alpha a1;
  Alpha a2;
}