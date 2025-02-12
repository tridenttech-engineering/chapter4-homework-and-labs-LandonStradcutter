// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {double totalDeposits=409.43;
            double totalwithdrawls= 210.65;
            double startbalance=2545.75;
            double endingbalance=0.0;

            cout << "Enter starting balance:";
            cin >> startbalance;
            cout << "Enter total deposits: ";
            cin >> totalDeposits;
            cout << "Enter total withdrawls:";
            cin >> totalwithdrawls;
            endingbalance = startbalance + totalDeposits - totalwithdrawls;

            cout << "Ending balance: $" << endingbalance << end1;

          
  

  return 0;
} // end of main function
