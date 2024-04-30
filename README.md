## Introduction:

We chose the budget tracker as a project, which aims to provide a tool for students to manage their income and expenses. The program should offer basic and important functionalities for tracking income, categorizing expenses, and calculating the budget.

## Requirements:

1. **Inputs:**
   - Income: Users will first enter their monthly salary, and after that, they can add any additional income to their budget along with the category of income.
   - Expense: Users will be able to enter expenses with their categories and amounts to track all transactions.
   - Income/Expense ID: Users can modify any transaction by entering its ID to change the amount, category, or type.

2. **Outputs:**
   - Summary: The program will show the summary of all transactions in a well-formatted way with the following information:
     - Total Income
     - Total Expense
     - Current balance (Total Income – Total Expense) showing ID and category of each Income and expense
   - Warnings: If the budget reaches a limit of $200, a message will appear to the user.
   - Error handling: The program will also have basic error handling for invalid inputs and prompt the user to re-enter the correct input.

## Functionalities:

1. **Main Menu:**
   - The program will display a menu offering the following options:
     - Enter Income
     - Enter Expense
     - Delete Last Expense or Income
     - Modify a selected expense or income
     - Print summary
     - Exit

2. **Enter Expense or Income:**
   - The program will store the income or expense details inside a linked list.

3. **View Summary:**
   - This function will calculate the total balance and list all income and expenses.

4. **Modify Income or Expense:**
   - This method will offer the ability to change any existing transaction to modify the amount, category, or type by entering the ID.

5. **Delete Last Income or Expense:**
   - This method will allow the user to undo their last action, such as entering a new income or expense, by deleting it from the linked list.

6. **Enter Salary:**
   - The first thing the user will do is enter their monthly salary.

7. **Exit:**
   - If the user wishes to terminate the program, they can do so by choosing the exit option from the menu.