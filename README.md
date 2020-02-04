# csci-241-ch01
Conversion between binary and decimal

Conversion_between_Binary_and_Decimal (Chapter 1)
Write a C++ program converting an 8-bit unsigned binary to its decimal and converting a positive decimal to its 8-bit binaries. You can create functions declared as

int BinToDec(char* s);
char* DecToBin(int n);

The purpose is to make you understand the number system concept. So you have to manually implement the ideas without making use of some library function, like itoa(), atoi(), pow(), etc. that make the assignment meaningless. Only function allowed to use is strlen().
For BinToDec(),
  Multiplication complexity of O(n) is required
  Using Horner's method is suggested
For DecToBin(),
  Correctly using memory to return char* is required
  The method of dividing by 2 and taking remainders reversely is suggested


Your program should be run like the following:
>>> Please select the conversion type:
 1. Binary to Decimal
 2. Decimal to Binary
 3. Exit
---------------------------------------
Erter your choice: 1
Please Enter 8-bit binary digits (e.g., 11110000): 10001001
The decimal integer of 10001001b is 137d

>>> Please select the conversion type:
 1. Binary to Decimal
 2. Decimal to Binary
 3. Exit
---------------------------------------
Erter your choice: 2
Please Enter a decimal integer less than 256: 137
The binary of 137d is 10001001b

>>> Please select the conversion type:
 1. Binary to Decimal
 2. Decimal to Binary
 3. Exit
---------------------------------------   
Enter your choice: 3
Bye.
Press any key to continue . . .


Also, don't use OOP based class/object feature, either a standard string or your created one. You must use C-string. Notice
The difference between a C-string and a char array. C-string is a zero-terminated char array
For a C-string, you can directly use it in cin and cout. Don’t set a loop to input/output for each char
If not understood well, search on-line such as
C strings and C++ strings at www.prismnet.com/~mcmahon/Notes/strings.html
C-style strings in C++ at www.cplusplus.com/forum/beginner/73114/
Lesson 9: C Strings at www.cprogramming.com/tutorial/lesson9.html
Avoid using mixed cin>>someVar and get()/getline() in this assignment. See What's the Difference between getline and cin?
