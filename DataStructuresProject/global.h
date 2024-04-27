#ifndef GLOBAL_H
#define GLOBAL_H
#include <iostream>
#include <string>

using namespace std;

class Budget {

private:
	double rBudget;
	double salary;
	struct expense {
		int expenseID;
		double amount;
		string category;
		expense* next;
	}*head, *tail;

public:
	Budget() {
		head = tail = NULL;
		rBudget = 0;
	}
	// By hammad
	bool checkBalance();

	void savings(); //Phase 3 and files manipluation

	// By hammad
	void modifySalary(double);  // change the salary data member

	// adding income and expnses -- By Bulaihi
	void addExpInc(double, string, bool); // use the checkBalance() method to give warnings

	// By AL-saif
	void summary();

	// By Eyad
	void removeExpense(int); //

	//void menu();


};


	
#endif // GLOBAL.h
