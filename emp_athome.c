//==============================================
// Name:           Bryle Joshua Alvarez
// Student Number: 119749190
// Email:          bjalvarez1@myseneca.ca
// Section:        NGG
// Workshop:       5 (at-home)
//==============================================

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements




// PROGRAM OUTPUT IS SHOW BELOW
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Define Number of Employees "SIZE" to be 4
#define SIZE 4

// Declare Struct Employee 
struct employee
{
	int id;
	int age;
	double salary;
};

int i;
/* main program */
int main(void)
{
	int option = 0;

	int t = 0;
	int f = 0;
	int lastRemoved = -1;

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero
	struct employee emp[SIZE] = { {0} };
	int num = 0;
	printf("---=== EMPLOYEE DATA ===---\n\n");

	do
	{
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option)
		{
		case 0:	// Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1: // Display Employee Data
				// at_home

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			for (i = 0; i < SIZE; i++) {
				if (emp[i].id > 0)
					printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
			}
			printf("\n");
			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;

		case 2:	// Adding Employee
				// at_home

			printf("Adding Employee\n");
			printf("===============\n");

			// Check for limits on the array and add employee 
			// data accordingly. 




			if (!(num < SIZE)) 
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}
			else
			{


				if (lastRemoved > 0) 
				{
					printf("Enter Employee ID: ");
					scanf("%d", &emp[lastRemoved].id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[lastRemoved].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[lastRemoved].salary);
					num++;
				}
				else 
				{
					printf("Enter Employee ID: ");
					scanf("%d", &emp[num].id);
					printf("Enter Employee Age: ");
					scanf("%d", &emp[num].age);
					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[num].salary);
					num++;
				}


			}
			printf("\n");
			break;
		case 3: //Update Salary
				//at_home
			printf("Update Employee Salary\n");
			printf("======================\n");
			f = 0;

			do 
			{

				t = 0;
				printf("Enter Employee ID: ");
				scanf("%d", &t);

				for (i = 0; i < SIZE; i -= -1)
				{
					if (t == emp[i].id) 
					{
						f = 1;
						printf("The current salary is %.2lf\n", emp[i].salary);

						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].salary);
						lastRemoved = i;
					}
					else if (i == SIZE - 1 && f == 0)
					{
						printf("*** ERROR: Employee ID not found! ***\n");
					}
				}

			} while (!f);
			printf("\n");
			break;
		case 4: // Remove Employee
			   // at_home
			printf("Remove Employee\n");
			printf("===============\n");
			f = 0;

			do 
			{

				t = 0;
				printf("Enter Employee ID: ");
				scanf("%d", &t);

				for (i = 0; i < SIZE; i -= -1) 
				{
					if (t == emp[i].id) 
					{
						f = 1;
						emp[i].id = 0;
						printf("Employee %d will be removed\n", t);
						lastRemoved = i;
						num--;
					}
					else if (i == SIZE - 1 && f == 0) 
					{
						printf("*** ERROR: Employee ID not found! ***\n");
					}
				}

			} while (!f);
			printf("\n");
			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);

	return 0;
}




// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 222
Enter Employee Age: 22
Enter Employee Salary: 22222.22

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 333
Enter Employee Age: 33
Enter Employee Salary: 33333.33

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 444
Enter Employee Age: 44
Enter Employee Salary: 44444.44

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 555
Enter Employee Age: 55
Enter Employee Salary: 55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   33333.33
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 123
*** ERROR: Employee ID not found! ***
Enter Employee ID: 321
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
The current salary is 33333.33
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   99999.99
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 789
*** ERROR: Employee ID not found! ***
Enter Employee ID: 987
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
Employee 333 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 666
Enter Employee Age: 66
Enter Employee Salary: 66666.66

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
666       66   66666.66
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employeex
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/

