#include "global.h"


// return true if Budget is less than 200 -- By hammad
bool Budget::checkBalance() {
    calcTotal();
    
    if (rBudget <= 200)return true;
    return false;

}

//Take double and update the salary -- By hammad
void Budget::modifySalary(double nSalary) { // change the salary data member
    salary = nSalary;
    calcTotal();
}

// adding income and expnses -- By Bulaihi
void Budget::addExpInc(double value, string cat, bool type) { // use the checkBalance() method to give warnings
    calcTotal();
    if (!type && rBudget - value <= 0) { // When expense is bigger than current balance then don't allow to add it
        printColored("Your balance is low! You can't add more expenses", 4);
        return;
    }
    expense *temp  = new expense;
    if(temp == NULL) {
        cout<<"Storage is Full !!"<<endl;
        return;
    }
    if (!type) {
        value = value * (-1); //change the value according to its type income or expense
    }
    
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
    

    if (type)
        cout << "Income added successfully" << endl;
    else
        cout << "Expense added successfully" << endl;

    if (checkBalance()) cout << "Warning! Budget Is Too Low!" << endl; //Warning of low budget

    
}
// By AL-saif
void Budget::summary() {
    //Put dollar sign and try to colorize the income and expense (using printColored(string, int))
    // if it's expense put the minus before the dollar sign (-$500)
    //Check the link sent in discord
    
    cout << endl;
    cout << "Summary: " << endl;
    if (head != NULL) {
        cout << "ID\tCategory\tAmount" << endl;
        cout << "--------------------------" << endl;
        expense* temp = head;
        int p = 7;
        while (temp != NULL) {
            
            
            if (temp->amount < 0) {
                
                cout << RED << temp->expenseID << "\t"<< setw(6) << temp->category << setw(6) << "\t" <<  "-$" << (temp->amount * -1) << RESET << endl;

            }
            else {
                
                cout <<GREEN <<  temp->expenseID << "\t" << setw(6) << temp->category << setw(6) << "\t" << " $" << (temp->amount) <<RESET<< endl;
            }
            temp = temp->next;
       }
       
    }
    else
        cout << "No Expenses" << endl;

    cout <<  "--------------------------" << endl;
    cout <<  "Total Expenses         " << RED << "-$" << totalExp << RESET << endl;
    cout <<  "Total Income            " << GREEN <<"$" << (totalInc + salary) << RESET << endl;
    cout << "Remaining Budget        "<<"$" << rBudget << endl;
        return ;
}

// By Eyad
void Budget::removeExpense() {
    if (head == NULL) {
        cout << "No expenses to remove!" << endl;
        return;
    }

    expense* temp = head;
    if (head == tail) { // only one node in the list
       // rBudget -= temp->amount; // ???
        delete temp;
        head = tail = NULL;
    }
    else {
        while (temp->next != tail) {
            temp = temp->next;
        }
        //rBudget -= tail->amount; 
        delete tail;
        tail = temp;
        tail->next = NULL;
    }
    
    cout << "Last expense removed successfully!" << endl;
    if (checkBalance()) cout << "Warning! Budget Is Too Low!" << endl;
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
                newAmount = (choice == 1) ? newAmount : newAmount * -1;
                if (rBudget + newAmount <= 0) { // When expense is bigger than current balance then don't allow to add it
                    printColored("Your balance is low! You can't add more expenses", 4);
                    return;
                }
                 // deleting the old amount from budget
                temp->amount = newAmount;
                // adding new amount to budget
                temp->category = newString;
                printColored("Operation is modified successfully", 2);
                if (checkBalance()) cout << "Warning! Budget Is Too Low!" << endl;
                return;
            }
            temp = temp->next;
        }
        printColored("The ID doesn't exist", 4);
    }
}

void Budget::calcTotal() {
    expense* temp = head;
    
    if (temp != NULL) {

        totalExp = 0;
        totalInc = 0;
        while (temp != NULL) {
            if (temp->amount < 0)
                totalExp += temp->amount * -1;
            else
                totalInc += temp->amount;

            temp = temp->next;
        }
    }

    rBudget = salary + totalInc - totalExp;

}