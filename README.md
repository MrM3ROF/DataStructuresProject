Introduction

We have chosen to develop a budget tracker as a project. This program will provide students with a tool to effectively track their income and expenses. The application will offer basic functionalities for:

Recording income
Categorizing expenses
Calculating remaining budget
Requirements

Inputs

Income: Users can enter their monthly salary as initial income. Additionally, they can add any further income throughout the month, specifying the category for each entry.
Expense: Users can record expenses by entering the amount, category, and a unique identifier. This allows them to track all transactions effectively.
Income/Expense ID: Users can modify existing transactions by providing the associated ID. This allows them to change the amount, category, or even switch between an income and expense entry.
Outputs

Summary: The program will display a well-formatted summary of all transactions, including:
Total income
Total expense
Current balance (Total Income - Total Expense)
Listing of all income and expense entries with their respective IDs and categories.
Warnings: A notification will appear if the remaining budget falls below a set limit (e.g., $200).
Error Handling: The program will implement basic error handling for invalid user inputs. Users will be prompted to re-enter the correct information.
Functionalities

Main Menu

The program will present a menu with the following options:

Enter Income
Enter Expense
Delete Last Entry (Income or Expense)
Modify Existing Entry (Income or Expense)
Print Summary
Exit
Entering Income and Expense

The program will utilize a linked list to store income and expense details.

Viewing Summary

This function will calculate the total balance and display a list of all income and expense entries.

Modifying Income or Expense

Users can modify existing transactions by entering the ID. This allows them to change the amount, category, or even convert the entry type (income to expense or vice versa).

Deleting Last Income or Expense

This feature allows users to undo their last action, such as entering a new income or expense, by deleting it from the linked list.

Entering Salary

Upon initial program launch, users will be prompted to enter their monthly salary.

Exiting the Program

Users can terminate the program by selecting the "Exit" option from the main menu.