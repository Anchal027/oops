#include<iostream>
#include<cstdlib>
using namespace std;
class ATM{
private:
    int password = 123;
    int pin;
    int count = 0;
    int entry;
    double deposit = 0.0;
    double balance = 0.0;
    double withdraw = 0.0;
    bool isTrue = true;

public:
    void getdata(){
        do {
            cout << "___**WELCOME TO YOUR ATM**___\n";
            cout << "Enter your pin: \n";
            cin >> pin;

            if (pin == password) {
                do {
                    cout << "___**WELCOME TO YOUR ATM**___\n";
                    cout << "1) Withdraw money\n";
                    cout << "2) Deposit money\n";
                    cout << "3) Request balance\n";
                    cout << "4) Quit the program\n";
                    cout << "Choose an option: \n";
                    cin >> entry;

                    switch (entry) {
                        case 1:
                            if (balance <= 0) {
                                cout << "Please Deposit some money\n";
                            } else {
                                cout << "Withdraw Money:\n";
                                cin >> withdraw;
                                if (withdraw > balance) {
                                    cout << "Insufficient funds\n";
                                } else {
                                    balance = balance - withdraw;
                                    cout << "Withdrawal successful\n";
                                }
                            }
                            break;
                        case 2:
                            cout << "Deposit money:\n";
                            cin >> deposit;
                            cout << "THANKS FOR DEPOSITING MONEY :)\n";
                            balance = balance + deposit;
                            break;
                        case 3:
                            cout << "Request balance: \n" << balance << endl;
                            break;
                        case 4:
                            cout << "HAVE A NICE DAY!!\n";
                            isTrue = false;
                            break;
                        default:
                            cout << "Invalid option. Please choose a valid option.\n";
                    }
                } while (isTrue);
            } else {
                count++;
                if (count == 3)
                    isTrue = false;
                else
                    cout << "WRONG PIN!!\n";
            }
        } while (isTrue);
    }
};

int main(){
    ATM obj;
    obj.getdata();
    return 0;
}

