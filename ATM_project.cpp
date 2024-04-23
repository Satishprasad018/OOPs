#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;

class atm
{
private:
     long int account_No;
     string name;
     int PIN;
     double balance;
     string mobile_No;

public:
     // Constructor to initialize data members
     atm(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
     {
          account_No = account_No_a;
          name = name_a;
          PIN = PIN_a;
          balance = balance_a;
          mobile_No = mobile_No_a;
     }
     // Accessors (getters)
     long int getAccount_No() { return account_No; }
     string getname() { return name; }
     int getPIN() { return PIN; }
     double getbalance() { return balance; }
     string getmobile_No() { return mobile_No; }

     int updateMobile()
     {
          string tempMob;
          cout << "Enter previous Moblie Number : ";
          cin >> tempMob;

          if (tempMob == getmobile_No())
          {
          }
     }
     int cashWithDraw(long int WithdrawAmt)
     {
          WithdrawAmt = 
          return 0;
     }
};

int main()
{
     long int accountNumber, withDrawAmt;
     int pinNumber;
     int choice = 0;
     atm user1(123456789, "Satish", 1111, 49999, "9850166325");

     do
     {
          system("cls");

          cout << endl
               << "**********************Welcome to Atm***************************" << endl;
          cout << endl
               << "Enter Account Number :";
          cin >> accountNumber;
          cout << endl
               << "Enter PIN Number :";
          cin >> pinNumber;

          if ((accountNumber == user1.getAccount_No()) && (pinNumber == user1.getPIN()))
          {
               do
               {
                    system("cls");
                    // user Interface
                    cout << endl
                         << "**** Welcome to ATM *****" << endl;
                    cout << endl
                         << "Select Options ";
                    cout << endl
                         << "1. Check Balance";
                    cout << endl
                         << "2. Cash withdraw";
                    cout << endl
                         << "3. Show User Details";
                    cout << endl
                         << "4. Update Mobile no.";
                    cout << endl
                         << "5. Exit" << endl
                         << "\n";
                    cout << "Enter Choice : ";
                    cin >> choice;

                    switch (choice)
                    {
                    case 1:
                         cout << "Available Balance : " << user1.getbalance() << endl;
                         _getch();
                         break;
                    case 2:
                         cout << "Enter WithDraw Amount : ";
                         cin >> withDrawAmt;

                         cout << user1.cashWithDraw(withDrawAmt) << endl;

                         _getch();
                         break;
                    case 3:
                         cout << "Name : " << user1.getname() << endl;
                         cout << "Moblie No. : " << user1.getmobile_No() << endl;
                         cout << "Account No. : " << user1.getAccount_No() << endl;
                         cout << "Balance : " << user1.getbalance() << endl;
                         _getch();
                         break;
                    case 4:
                         user1.updateMobile();
                         _getch();
                         break;
                    case 5:
                         exit(0);
                    };

               } while (1);
          }
     } while (1);

     return 0;
}