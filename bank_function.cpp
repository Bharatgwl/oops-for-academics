#include <iostream>
#include <stdexcept>
using namespace std;
class insufficientfundsException
{
public:
    string Error_func()
    {
        return "insufficient funds Exception";
    }
};
class bank
{
private:
    int balance;

public:
    bank() {}
    bank(int balance)
    {
        this->balance = balance;
    }
    void withdraw(int amount)
    {
        if (amount < 0)
        {
            throw("invalid withdrawal amount");
        }
        if (amount > balance)
        {
            throw insufficientfundsException();
        }
        balance -= amount;
        cout << "withdrawal successfull of amount :" << amount << endl;
        cout << "remaining balance: " << balance << endl;
    }
};

int main()
{
    bank account(10000);
    int amount;
    try
    {
        cout << "enter the amount to withdraw: ";
        cin >> amount;
        account.withdraw(amount);
    }
    catch (const char *c)
    {
        cout << c << endl;
    }
    catch (insufficientfundsException e)
    {
        cout << e.Error_func() << endl;
    }

    return 0;
}