#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :" ;
    cin >> n;
    int result = 0;

    for (int i = 1; i < n/2 + 1 ; i++)
    {
        if (n % i == 0)
        {
            result = result + i;
        }
    }

    if (n == result)
    {
        cout << "Perfect Number" << endl;
    }else{
        cout<<"NOT a Perfect Number"<<endl;
    }
    return 0;
}
