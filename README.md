# STRUCTURED-PROGRAMMING_PRACTICE
## 01_Basic_input 
*Description :
The program prints two welcome messages to the screen
*Concepts    :
#include<stdio.h>,int main(),printf(),\n,return 0.
*How it works :
includes the stdio library to use printf,
Enters main function,
first printf prints welcome to C,
the second printf prints The basic input exercise,
Return 0 to show success
*Example  :
output
source :
How to program(9th eidtion),page108,example 2.2

## 02_input_process_output
*Description  :
This program demonstrates input in C.The user enters two integer numbers using scanf and stores them  in variable.
*Concepts used :
int,printf ,scanf
*How it works  :
Declares two integer variables,prompts the user to enter the number,Reads first number into number1,and second number into number2,outputs the two enered numbers, program ends
Example :
output Enter number1:2, Enter number2:6
*source  :
How to program(9th edition),page 130,exercise 2.6(a,b)

## 03_decision
*Description  :
program checks if two numbers entered by the user are equal or not
*concepts     :
else if ,if,else,relational operator
*How it works  :
Reads num1 and num2,if num1==num2 prints is equal,else if num1!=num2 prints not eqaul,else prints invalid
Example   = Enter num1:5 ,Enter num2:5 prints as number1 is equal to number2
source     = How to program(9th edition) page122,exercise 2.5

## 04_Basic_loop
*Description :
This program prints numbers in a triangular pattern using nested loops
*Concepts  :
for loop,nested loop,counter variable,
*How  it works  :
a starts at 1,outer loop i=1:inner loop runs 1time,outer loop i=2:inner loop runs 2times,outer loop i=3:inner loop runs 3times,outer loop i=4:inner  loop runs 4times,Ater each inner loop print("\n") moves to the next line
*Example  :
output 1,(2,3)
source  =How to program(9th edition) page229 exercise 4.36

## 05_loop_calculation
*Description  :
calculates amount with compound interest for 5 years.
*Concept  :
double,#include <math.h> ,for loop,format specifiers,formula pow
*HOW IT WORKS :
sets principle,prints header,loops year from 1 to 5,Each loop calculates amount, prints year and amount with two decimal places 
*Example  :
output year 1: Amount on deposit 1050.00
*source   :
How to program(9th edition) page193,example 4.4
## 06_oop_input
*Description  :
prints a tright tiangle of stars using nest while loops
*Concepts   :
while loop,nested ,Counters,while loop
*How it works  :
first_count starts at 1, loops while <=10 (rows)For each row, second_count starts at 1Inner while prints "_ " while second_count <= first_count ,So row 1 prints 1 star, row 2 prints 2 stars.After inner loop, new line and first_count++
*Example = output *
source  = How to program(9thedition),page 180,exercise 3.29
## 07_loop_decision
Description:
Prints a square matrix with @ on the diagonal where row == column. Demonstrates nested loops with if-else inside.
*Concepts Used: 
Nested for loops y for rows, z for columnsif(y==z) decision inside loopprintf for pattern printing
*How it works: 
User enters x (size, 1-10)Outer loop y=1 to x for rowsInner loop z=1 to x for columnsIf y==z prints @, else prints spaceAfter inner loop prints newline
*Example 
output of x=5 @@@@@
*source
How to program(9th edition),page224,exercise 4.8
## 08_interactive_program
Description:
How it works:Initializes aCount=0 and bCount=0User enters gradesWhile grade is not EOF, switch checks itIf A or a, increases aCountIf B or b, increases bCountIf other letter, shows Incorrect grade messageAt end, prints total of A and total of BExample Output:
Enter the letter grades:
Enter the EOF character to end input:
A
b
A
C
Incorrect grade letter entered
Enter correct grade:
BTotal of each grade letter are:
A: 2
B: 2


