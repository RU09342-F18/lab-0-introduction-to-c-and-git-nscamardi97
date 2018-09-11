# Lab 0: Calculator Program
- Nick Scamardi
- Embedded Systems Section 3
- September 10, 2018

# Functionality
The main functionality of this program is to perform various operations on 1-2 integers, similiar to that of a calculator. The functions supported by the program include add, subtract, multiply, divide, modulus, shift left, shift right, bitwise ADD, bitwise OR, bitwise XOR, and bitwise inverse on number 1.

# Valid Inputs/Outputs
In order to use this program, the user will have to input values which get assigned to num1 and num2. They will also have to input the desired operation. This calculator uses integers only, so no other data types will be allowed.

# Description of Code
The math.c file that was implemented has two integer inputs, num1 and num2, one character input, Operator, and one output. A switch statement was used in order to implement different behavior based on the operator input. Each case performs the desired arithmetic or logical operation on the integers input based on the selected operator. The default case is to return 0.
