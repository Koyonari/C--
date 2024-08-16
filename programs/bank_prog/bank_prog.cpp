#include <iostream>
#include <iomanip>

int menu();
double deposit();
double withdraw(double balance);
void showBalance(double balance);

int main() {
    int choice = 0;
    double balance = 0;

    do{
        choice = menu();

        std::cin.clear(); // reset error flags
        fflush(stdin); // clear input buffer

        switch(choice) {
            case 1:
                balance += deposit();
                break;
            case 2:
                balance -= withdraw(balance);
                break;
            case 3:
                showBalance(balance);
                break;
            case 4:
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

int menu() {
    int choice;
    std::cout << "\n-----Banking Program-----\n1) Deposit\n2) Withdraw\n3) Show Balance\n4) Exit\n\nEnter your choice: ";
    std:: cin >> choice;

    return choice;
}

void showBalance(double balance) {
    std::cout << "\nBalance: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit() {
    double amount;

    std::cout << "\n------Deposit-------\nEnter amount to deposit: ";
    std::cin >> amount;

    return amount;
}

double withdraw(double balance) {
    double amount;

    std::cout << "\n------Withdraw-------\nEnter amount to withdraw: ";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds\n";
    }
    else {
        std::cout << "Withdrawal successful\n";
    }

    return amount;
}