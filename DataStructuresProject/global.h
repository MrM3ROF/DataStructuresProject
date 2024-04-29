#ifndef GLOBAL_H
#define GLOBAL_H
#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>

#define RESET       "\033[0m"
#define GREEN       "\033[32m"
#define RED         "\033[31m"

using namespace std;



class Budget {

private:
	double rBudget = 0;
	double salary = 0;
	double totalExp = 0;
	double totalInc = 0;
	struct expense {
		int expenseID;
		double amount;
		string category;
		expense* next;
	}*head, *tail;

public:
	Budget() {
		head = tail = NULL;
		
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

	void calcTotal();

};
// use it to print in colors (2 for green | 4 for red)
void printColored(string,int); 
							  


	
#endif // GLOBAL.h
