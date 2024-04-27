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

}

// By Eyad
void Budget::removeExpense() {
	
}