#include "global.h"


int main() {
	double valueInput; // Saves any number from user to pass into methods
	string stringInput;	// Saves any string to pass into methods
	char choice;	// To save the choice from user in menu
	Budget userBudget;
	int choosenID;

	cout << "Enter Your salary: ";
	cin >> valueInput;

	userBudget.modifySalary(valueInput);

	do {
		cout << endl;
		cout << "-Budget Tracker-" << endl;
		cout << "1. Add Expense" << endl;
		cout << "2. Add Income" << endl;
		cout << "3. Display Summary" << endl;
		cout << "4. Remove Last Expense/Income" << endl;
		cout << "5. Modify An Income/Expense By ID" << endl;
		cout << "6. Exit" << endl;
		cout << "Enter Your Choice: ";

		cin >> choice;

		switch (choice)
		{
		case '1':
			cout << "Enter Expense category: ";
			cin >> stringInput;
			cout << "Enter Expense amount: ";
			cin >> valueInput;
			userBudget.addExpInc(valueInput, stringInput, false); // false for expenses

			break;
		case '2':
			cout << "Enter Income category: ";
			cin >> stringInput;
			cout << "Enter Income amount: ";
			cin >> valueInput;
			userBudget.addExpInc(valueInput, stringInput, true); // true for incomes

			break;
		case '4':
			userBudget.removeExpense();
			break;
		case '5':
			cout << "Enter ID of Income/Expense to modify: ";
			cin >> choosenID;
			userBudget.modifyExpInc(choosenID);
			break;
		case '6':		// if user choose 6 to exit then print summary before exit
			// no break to print the summary
		case '3':
			userBudget.summary();
			break;
		default: // If user enter something not from (1-6) 
			cout << "Wrong input, Try again :)" << endl;
			break;
		}
		cout << endl;

	} while (choice != '6');
	userBudget.~Budget();

}