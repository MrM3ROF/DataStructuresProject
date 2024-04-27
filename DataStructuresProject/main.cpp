#include "global.h"


int main() {
	double valueInput;
	string stringInput;
	int choice;
	Budget userBudget;

	cout << "Enter Your salary: ";
	cin >> valueInput;

	userBudget.modifySalary(valueInput);

	do {
		cout << "Budget Tracker" << endl;
		cout << "1. Modify Salary" << endl;
		cout << "2. Add Expense" << endl;
		cout << "3. Add Income" << endl;
		cout << "4. Display Summary" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter Your Choice: ";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter Your salary: ";
			cin >> valueInput;

			userBudget.modifySalary(valueInput);
			break;
		case 2:
			cout << " Enter Expense category: ";
			cin >> stringInput;
			cout << "Enter Expense amount: ";
			cin >> valueInput;
			userBudget.addExpInc(valueInput, stringInput, false);

			break;
		case 3:
			cout << " Enter Income category: ";
			cin >> stringInput;
			cout << "Enter Income amount: ";
			cin >> valueInput;
			userBudget.addExpInc(valueInput, stringInput, true);

			break;
		case 5:
			
		case 4:
			userBudget.summary();
			break;
		default:
			cout << "Wrong input, Try again :)" << endl;
			break;
		}

	} while (choice != 5);
}