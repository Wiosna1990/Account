
#include <iostream>
using namespace std;

class Account
{
private:
    string number;
    string owner;
    double state;
    static int numberOfAccounts;
    
    static double interest;
public:
    Account(string _number, string _owner, double _state)
        :number(_number), owner(_owner), state(_state)
    {
        numberOfAccounts++;
    }

    void changeState(double newState)
    {
        state = newState;
    }
    void display()
    {
        cout << endl << "Number: " << number;
        cout << endl << "Owner: " << owner;
        cout << endl << "State: " << state;
    }
    
    static int getNumberOfAccounts()
    {
        return numberOfAccounts;
    }
    static double getInterest()
    {
        return interest;
    }
};
int Account::numberOfAccounts = 0;
double Account::interest = 5;

int main(int argc, char* argv[])
{

    Account a1("1234123412341234", "John Wick", 10000.00);
    a1.display();

    Account a2("2345234523452345", "Kate Middleton", 1234.00);
    a2.display();

    Account a3("4567456745674567", "Sarah Connor", 323456.00);
    a3.display();

    cout << endl << "Number of accounts: " << a1.getNumberOfAccounts();
    cout << endl << "Interest: " << a1.getInterest();

    cout << endl << "Number of accounts from the account class: " << Account::getNumberOfAccounts();
    cout << endl << "Interest from account class: " << Account::getInterest();
    
}