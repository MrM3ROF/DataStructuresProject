#include "global.h"
// By hammad
bool Budget::checkBalance() {



}

void Budget::savings() { //Phase 3 and files manipluation


}
// By hammad
void Budget::modifySalary(double) { // change the salary data member
	
}

// adding income and expnses -- By Bulaihi
void Budget::addExpInc(double value, string cat, bool type) { // use the checkBalance() method to give warnings
    expense *temp  = new expense;
    if(temp == NULL) {
        cout<<"Storage is Full !!"<<endl;
        return;
    }
    if(!type) value = value*(-1); //change the value according to its type income or expense
    if (head == NULL){ //if the list is empty
        temp->expenseID = 1;
        head = tail = temp;
    }
    else {
    temp->expenseID = tail->expenseID+1;
    tail->next = temp;
    tail=temp;
    }
    temp->next=NULL;
    temp->category = cat;
    temp->amount = value;
    rBudget += value;

    if (type)
        cout << "Income added successfully" << endl;
    else
        cout << "Expense added successfully" << endl;

    checkBalance();

    
}
// By AL-saif
void Budget::summary() {
    //Put dollar sign and try to colorize the income and expense (using printColored(string, int))
    // if it's expense put the minus before the dollar sign (-$500)
    //Check the link sent in discord
}

// By Eyad
void Budget::removeExpense() {
	
}
// By Muhannad
void Budget::modifyExpInc(int id) {
    expense* temp = head;
    int choice;
    string newString;
    double newAmount;
    if (temp == NULL) {
        cout << "There is no expenses nor Incomes to modify!" << endl;
    }
    else {
        while (temp != NULL) {
            if (temp->expenseID == id) {
                cout << "Change to 1-Income or 2-Expense: ";
                cin >> choice;
                cout << " Enter new category: ";
                cin >> newString;
                cout << "Enter new amount: ";
                cin >> newAmount;
                rBudget = rBudget - temp->amount;
                temp->amount = newAmount;
                rBudget = rBudget + temp->amount;
                temp->category = newString;
                printColored("Operation is modified successfully", 2);
                return;
            }
            temp = temp->next;
        }
        printColored("The ID doesn't exist", 4);
    }
}