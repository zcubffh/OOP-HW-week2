#include <iostream>
using namespace std;
class Account {
public:
    string accountNumber;
    string name;//Show ownername
    double balance;
    void deposit (double amount) {
        balance += amount;
        cout << "Deposited:" << amount << endl;
}
    void withdraw (double amount) {
        if (amount > balance) {
        cout << "Insufficient balance!" << endl;
    } else if (balance - amount < 100) {
        cout << "Withdraw Invalid" << endl;
    } else {
        balance -= amount;
        cout << "Withdrew:" << amount << endl;
}
}
    void displayBalance () {
        cout << "Current balance:" << balance << endl;
        cout <<"Name:" << name << endl;
    }
};
int main() {
    Account acc1;
    acc1.accountNumber = "123456789";
    acc1.name = "Vinh";
    acc1.balance = 1000.0;
    acc1.displayBalance();
    acc1.deposit(500);
    acc1.displayBalance();
    acc1.withdraw(200);
    acc1.displayBalance();
    acc1.withdraw(1500);
    acc1.displayBalance();
    acc1.withdraw(1300);//Account minimum 100
    acc1.displayBalance();
    return 0;
}
