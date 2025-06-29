// ------------- FILE HEADER -------------
// Author: Yusong Jin
// Assignment: 1
// Date: June 24
// Description: Payroll
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 1
// Participation: 100%
// Challenge: 100%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: y
// B. OUTPUT [yes/no]: y
// C. CALCULATIONS [yes/no]: y
// D. LOGIC and ALGORITHMS [yes/no]: y
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: Yes  
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;


int main() {
int employee_id_number= 0;
int number_hours_worked = 0;
int hourly_rate = 0;
int federal_withholding_rate = 0;
int total_gross_pay = 0;
int federal_tax_withholding = 0;
int net_pay = 0;

cout << "Welcome to my Weekly Payroll program!!" << endl;
cout << "Enter your employee ID number (numbers only): " << endl;
cout << "Enter number of hours worked (whole numbers): " << endl;
cout << "Enter the hourly rate: " << endl;
cout << "Enter the federal withholding rate: " << endl;

cin >> employee_id_number;
cin >> number_hours_worked;
cin >> hourly_rate;
cin >> federal_withholding_rate;

total_gross_pay = number_hours_worked * hourly_rate;
federal_tax_withholding = total_gross_pay * (federal_withholding_rate / 100.0);
net_pay = total_gross_pay - federal_tax_withholding;

cout << "Your Payroll Summary: " << endl;
cout << "Total Gross Pay: $" << total_gross_pay << endl;
cout << "Federal Tax Withholding: $" << federal_tax_withholding << endl;
cout << "Net Pay: $" << net_pay << endl;
cout << endl;
cout << "Thank you for using my Weekly Payroll program!!" << endl;

  return 0;
}




// ------------- DESIGN -------------
/* 

Read the employee ID number (an int) from the user

Read the number of hours worked (an int) from the user

Read the hourly rate (an int) from the user

Read the federal withholding rate (an int, e.g., 10)

You must read one input per line. Please see the sample run below. This is part of the required coding construct.

Your program should calculate the total gross pay, the Income Tax Withholding, and the net pay.

First calculate the total gross pay from the hours worked and the hourly rate inputs.

Then calculate the Federal Tax withholding using the gross pay and the federal withholding rate.

Then calculate the Net Pay by subtracting the federal tax withholding from the gross pay.

Program Name: Weekly Payroll

Program Description: Calculate pay and taxes

Design:
A. INPUT
Define the input variables including name data type. 

cin >> employee_id_number;
cin >> number_hours_worked;
cin >> hourly_rate;
cin >> federal_withholding_rate;

B. OUTPUT
Define the output variables including data types. 

cout << "Welcome to my Weekly Payroll program!!" << endl;
cout << "Enter your employee ID number (numbers only): " << endl;
cout << "Enter number of hours worked (whole numbers): " << endl;
cout << "Enter the hourly rate: " << endl;
cout << "Enter the federal withholding rate: " << endl;
cout << "Your Payroll Summary: " << endl;
cout << "Total Gross Pay: $" << total_gross_pay << endl;
cout << "Federal Tax Withholding: $" << federal_tax_withholding << endl;
cout << "Net Pay: $" << net_pay << endl;
cout << endl;
cout << "Thank you for using my Weekly Payroll program!!" << endl;

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

total_gross_pay = number_hours_worked * hourly_rate
federal_tax_withholding = total_gross_pay * (federal_withholding_rate / 100.0)
net_pay = total_gross_pay - federal_tax_withholding

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

BEGIN
    // Step 1: 
    Read Inputs (One per line)
    
    DISPLAY "Enter your employee ID number (numbers only): "
    READ employeeID number

    DISPLAY "Enter number of hours worked (whole numbers): "
    READ hours worked

    DISPLAY "Enter the hourly rate: "
    READ hourly rate

    DISPLAY "Enter the federal withholding rate: "
    READ federal withholding rate

    // Step 2: Calculations
    SET total_gross_pay = number_hours_worked * hourly_rate
    SET federal_tax_withholding = total_gross_pay * (federal_withholding_rate / 100)
    SET net_pay = total_gross_pay - federal_tax_withholding

    // Step 3: Output Results
    DISPLAY "Your Payroll Summary:"
    DISPLAY "Total Gross Pay: $" + total_gross_pay
    DISPLAY "Federal Tax Withholding: $" + federal_tax_withholding
    DISPLAY "Net Pay: $" + net_pay
END


SAMPLE RUNS
Copy from assignment document.
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!
*/