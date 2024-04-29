#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void displayMainMenu();
void homeLoan();
void jewelryLoan();
void checkEligibility();
void fixedDeposit();
void otherInvestments();

void displayMainMenu() {
    cout << "\n===== Banking System Main Menu =====\n";
    cout << "1. Home Loan\n";
    cout << "2. Jewelry Loan\n";
    cout << "3. Check Eligibility\n";
    cout << "4. Fixed Deposit\n";
    cout << "5. Other Investments\n";
    cout << "0. Exit\n";
}

void homeLoan() {
    cout << "\n===== Home Loan =====\n";
   
    cout << "Available Home Loan Options:\n";
    cout << "1. Fixed-Rate Mortgage\n";
    cout << "2. Adjustable-Rate Mortgage\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: {
            cout << "You've chosen a Fixed-Rate Mortgage.\n";
           
            cout << "Enter loan amount: Rs";
            double loanAmount;
            cin >> loanAmount;
            cout << "Enter loan term (in years): ";
            int loanTerm;
            cin >> loanTerm;
            double interestRate = 4.5; 
            double monthlyPayment = (loanAmount * (interestRate / 100) / 12) / (1 - pow(1 + (interestRate / 100) / 12, -loanTerm * 12));
            printf("Your monthly payment will be: Rs%.2f\n", monthlyPayment);
            break;
        }
        case 2: {
            cout << "You've chosen an Adjustable-Rate Mortgage.\n";
    
            cout << "Enter loan amount: Rs";
            double loanAmount;
            cin >> loanAmount;
            cout << "Enter loan term (in years): ";
            int loanTerm;
            cin >> loanTerm;
            double initialInterestRate = 3.5;
            double initialMonthlyPayment = (loanAmount * (initialInterestRate / 100) / 12) / (1 - pow(1 + (initialInterestRate / 100) / 12, -loanTerm * 12));
            printf("Your initial monthly payment will be: Rs%.2f\n", initialMonthlyPayment);
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }
}



void jewelryLoan() {
    cout << "\n===== Jewelry Loan =====\n";

    cout << "Please bring your jewelry to our nearest branch for evaluation.\n";
}

void checkEligibility() {
    cout << "\n===== Check Eligibility =====\n";

    int age;
    double income;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your annual income: Rs";
    cin >> income;
    if (age >= 18 && income >= 20000) {
        cout << "Congratulations! You are eligible for a loan.\n";
    } else {
        cout << "Sorry, you are not eligible for a loan.\n";
    }
}

void fixedDeposit() {
    cout << "\n===== Fixed Deposit =====\n";

    cout << "Fixed Deposit Options:\n";
    cout << "1. 1-Year Term, 3% Interest\n";
    cout << "2. 2-Year Term, 3.5% Interest\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: {
            cout << "You've chosen a 1-Year Term with 3% Interest.\n";
       
            cout << "Enter deposit amount: Rs";
            double depositAmount;
            cin >> depositAmount;
            double interestRate1 = 3.0; 
            double interestEarned1 = depositAmount * (interestRate1 / 100);
            double totalAmount1 = depositAmount + interestEarned1;
            printf("At the end of 1 year, your total amount will be: Rs%.2f\n", totalAmount1);
            break;
        }
        case 2: {
            cout << "You've chosen a 2-Year Term with 3.5% Interest.\n";
 
            cout << "Enter deposit amount: Rs";
            double depositAmount;
            cin >> depositAmount;
            double interestRate2 = 3.5; 
            double interestEarned2 = depositAmount * (interestRate2 / 100);
            double totalAmount2 = depositAmount + interestEarned2;
            printf("At the end of 2 years, your total amount will be: Rs%.2f\n", totalAmount2);
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }
}

void otherInvestments() {
    cout << "\n===== Other Investments =====\n";

    cout << "Available Investment Options:\n";
    cout << "1. Stock Market\n";
    cout << "2. Mutual Funds\n";
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1: {
            cout << "You've chosen the Stock Market.\n";

            cout << "Enter investment amount: Rs";
            double investmentAmount;
            cin >> investmentAmount;

            double annualReturnRate = 7.0;
            double totalReturn = investmentAmount * (annualReturnRate / 100);
            printf("After one year, your investment will return: Rs%.2f\n", totalReturn);
            break;
        }
        case 2: {
            cout << "You've chosen Mutual Funds.\n";

            cout << "Enter investment amount: Rs";
            double investmentAmount;
            cin >> investmentAmount;

            double annualReturnRate = 5.0;
            double totalReturn = investmentAmount * (annualReturnRate / 100);
            printf("After one year, your investment will return: Rs%.2f\n", totalReturn);
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }
}

int main() {
    char choice;

    do {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                homeLoan();
                break;
            case '2':
                jewelryLoan();
                break;
            case '3':
                checkEligibility();
                break;
            case '4':
                fixedDeposit();
                break;
            case '5':
                otherInvestments();
                break;
            case '0':
                cout << "Thanks for using our service! Have a great day!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != '0');

    return 0;
}
