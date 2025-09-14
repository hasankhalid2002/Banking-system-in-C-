#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main() {

start:

    string name;
    long long AcountNumber = 0;
    double Balance = 0;

    // انشاء الحساب او الدخول عليه

    int Step;
    cout << "1 : sign up\n";
    cout << "2 : sign in\n";
    cout << "Please Chioce : ";
    cin >> Step;

    while (Step > 2 || Step < 1)
    {
        cout << "Please Enter Vaild Chioce : ";
        cin >> Step;
    }
    cout << "\n";
    if (Step == 1)
    {
        cout << "Please Enter Account Name : ";
        cin >> name;
        cout << "\n";
        cout << "Please Enter Account Number : ";
        cin >> AcountNumber;
        while (AcountNumber <= 999999999999999 || AcountNumber > 9999999999999999)
        {
            cout << "Please Enter Vaild Chioce : ";
            cin >> AcountNumber;
        }
        cout << "\n";
        cout << "Please Enter Account Balance : ";
        cin >> Balance;
        cout << "\n";
    }
    else if (Step == 2)
    {
        cout << "Please Enter Account Name : ";
        cin >> name;
        cout << "\n";
        cout << "Please Enter Account Number : ";
        cin >> AcountNumber;
        while (AcountNumber <= 999999999999999 || AcountNumber > 9999999999999999)
        {
            cout << "Please Enter Vaild Chioce : ";
            cin >> AcountNumber;
        }
        cout << "\n";
        cout << "Please Enter Account Balance : ";
        cin >> Balance;
        cout << "\n";
    }






    int choice;

    do
    {
        // ظهور العمليات 

        cout << "Your Acount Number = " << AcountNumber <<
            "                    Your Acount Balance = " << Balance << "$" << "\n";

        cout << "\n                                   Welcome To Your Account                  \n";
        cout << "\n";
        cout << "1. Deposit money :\n";
        cout << "2. Withdraw money :\n";
        cout << "3. Exit\n";
        cout << "4. Close Account\n";
        cout << "Enter your choice : ";
        cin >> choice;




        while (choice < 1 || choice > 4) {
            cout << "Your choice " << choice << " is not valid\n";
            cout << "Please choose an option between (1 - 3) : ";
            cin >> choice;
        }

        switch (choice)
        {

            // عمليه الايداع

        case 1:
            double depositamount;
            cout << " Enter the amount to deposit : ";
            cin >> depositamount;
            while (depositamount <= 0) {
                cout << "Your depositamount " << depositamount << " is not valid\n";
                cout << "Please Enter depositamount Valid : ";
                cin >> depositamount;
            }
            Balance += depositamount;
            cout << "$" << " deposeted successfully." << endl;
            cout << "\n";
            break;

        case 2:

            // عمليه السحب

            double withdrawamount;

            cout << "Enter amount to withdraw: ";
            cin >> withdrawamount;
            while (withdrawamount <= 0) {
                cout << "Your withdrawamount " << withdrawamount << " is not valid\n";
                cout << "Withdrawal amount must be posative." << endl;
                cout << "Enter the amount to withdraw :";
                cin >> withdrawamount;

            }
            cout << "\n";
            if (Balance >= withdrawamount) {
                Balance -= withdrawamount;
                cout << "$" << withdrawamount << " withdrawn successflly." << endl;
                cout << "\n";
            }
            else {
                cout << "Insufficient funds. withdrawal denied." << endl;
                cout << "\n";
            }
            break;


        case 4:

            // إغلاق الحساب

            cout << "Are You Sure\n";
        Towice:
            cout << "Pleasr Write Y or N : ";
            string Solution;
            cin >> Solution;
            if (Solution == "Y") {
                cout << "\n";
                goto start;
            }
            else if (Solution == "N") {
                break;
            }
            else {
                goto Towice;
            }
        }

    } while (choice != 3);


    return 0;
}


