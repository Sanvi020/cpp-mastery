#include <iostream>
#include <string>
using namespace std;

class account
{
public:
    string name;
    int balance;
    int account_no;

    account(string name, int balance, int account_no)
    {
        this->name = name;
        this->balance = balance;
        this->account_no = account_no;
        cout << "Hi I am a constructor" << endl;
    }

    void getdata()
    {
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
        cout << "Account_no : " << account_no << endl;
    }

    void deposit()
    {
        int amount;
        cout << "Enter deposit amount" << endl;
        cin >> amount;
        balance += amount;
        cout << "So the total is " << balance << endl;
    }

    void withdraw(){
        int amount;
        cout<<"Enter withdraw amount"<<endl;
        cin>>amount;
        balance += amount;
        cout<<"So the balance is "<<balance << endl;
 }

      void showbalance(){
        cout<<"So the balance is "<<balance<<endl;
      }
};

int main()
{
    account a1("sanvi", 1000, 123678);
    a1.getdata();
    a1.deposit();
   
}