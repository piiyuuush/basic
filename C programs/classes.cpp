#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class: BankAccount
class BankAccount {
protected:
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(const string& name, double initialBalance)
        : accountHolderName(name), balance(initialBalance) {}

    // Destructor
    virtual ~BankAccount() {}

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid withdrawal amount!" << endl;
        }
    }

    // Virtual function to display account details
    virtual void displayDetails() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class: SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate; // Annual interest rate in percentage

public:
    // Constructor
    SavingsAccount(const string& name, double initialBalance, double rate)
        : BankAccount(name, initialBalance), interestRate(rate) {}

    // Function to calculate interest
    void calculateInterest() {
        double interest = balance * (interestRate / 100);
        cout << "Interest earned: " << interest << endl;
    }

    // Overriding the displayDetails function
    void displayDetails() const override {
        cout << "Savings Account Details:" << endl;
        BankAccount::displayDetails();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Derived class: CurrentAccount
class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    // Constructor
    CurrentAccount(const string& name, double initialBalance, double overdraft)
        : BankAccount(name, initialBalance), overdraftLimit(overdraft) {}

    // Overriding the withdraw function
    void withdraw(double amount) override {
        if (amount > 0 && (balance + overdraftLimit) >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << balance << endl;
        } else {
            cout << "Exceeds overdraft limit or invalid withdrawal amount!" << endl;
        }
    }

    // Overriding the displayDetails function
    void displayDetails() const override {
        cout << "Current Account Details:" << endl;
        BankAccount::displayDetails();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

// Main function
int main() {
    // Creating a SavingsAccount
    SavingsAccount savings("Alice", 5000.0, 3.5);
    savings.displayDetails();
    savings.deposit(2000);
    savings.withdraw(1000);
    savings.calculateInterest();
    cout << endl;

    // Creating a CurrentAccount
    CurrentAccount current("Bob", 3000.0, 1500.0);
    current.displayDetails();
    current.deposit(1000);
    current.withdraw(4000);
    current.withdraw(2000); // Exceeds overdraft
    cout << endl;

    return 0;
}
