#ifndef GLOBAL_H
#define GLOBAL_H
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);

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


	// By hammad
	void modifySalary(double);  // change the salary data member

	// adding income and expnses -- By Bulaihi
	void addExpInc(double, string, bool); // use the checkBalance() method to give warnings

	// By AL-saif
	void summary();

	// By Eyad
	void removeExpense(); // remove the last income / expense in list

	//void menu();

	void modifyExpInc(int); // change the category and amount of selected node by id parameter

};
// use it to print in colors (2 for green | 4 for red)
void printColored(string,int); 
							  


	
#endif // GLOBAL.h
