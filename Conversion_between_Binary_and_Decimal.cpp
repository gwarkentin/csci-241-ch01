/*-----------------------------------------------------------------------------------------
Student: Gabriel Warkentin
ID: 01738084
Class: CSCI 241
Instructor: Ding
Assignment: Ch01, Conversion_between_Binary_and_Decimal
Due Date: 2/5/2020

Description:
This program converts a user defined 8 bit binary number into a decimal number or a user
defined decimal number(<256) into an 8 bit binary number depending on a menu selection.

-----------------------------------------------------------------------------------------*/
#include<iostream>

// ============================================================================
// Function:	BinToDec
// Description:	This function converts an 8-bit binary integer to its decimal
// Parameter:   s [IN] -- a C-string with 8-bit binary digits received
// Return:      A decimal integer value calculated from s
// ============================================================================
int BinToDec(char* s) {
    int dec = 0;
    int i = 0;

    //Horner's method. Keep going until null ternminator. This allows any length string to be used.
    while (s[i] != '\0') {
        
        dec = (dec * 2) + (s[i] - '0'); // - '0' used to make '0' and '1' ASCII to literal 0 and 1.
        i++;
    }
    
    return dec;
}

// ============================================================================
// Function:	DecToBin
// Description:	This function converts a decimal integer to its binary bits
// Parameter:   n [IN] -- a decimal integer received, less than 256
// Return:      A C-string with 8-bit binary digits calculated from n
// ============================================================================
char* DecToBin(int n) {
    char* bin;
    bin = new char[9];
    
    bin[8] = '\0'; //since manually filling backwards, need to put null terminator at end

    int rem = 0; //remainder
    int i = 0;

    /*
    while (n > 0 && i <= 7) {
        rem = n % 2;
        n = n / 2;
        bin[7 - i] = rem + '0'; //fill array backwards. I believe it is O(1) in C to access array locations.
        i++;
    }

    //fill the rest with 0s
    while (i <= 7) {
        bin[7 - i] = '0';
        i++;
    }
    */

    //cleaner solution
    while (i <= 7) {
        if (n > 0) {
            rem = n % 2;
            n = n / 2;
            bin[7 - i] = rem + '0';
        }
        else {
            //fill the rest with 0s
            bin[7 - i] = '0';
        }
        i++;
    }

    return bin;
}

int main() {

    bool quit = false;
    int entry;

    while (!quit)
    {
        // Show menu and read case action
        std::cout << "Please select the conversion type:\n 1. Binary to Decimal\n 2. Decimal to Binary\n 3. Exit\n Enter your choice: ";
        std::cin >> entry;
        
        switch (entry)
        {
            case 1:  // How to call BinToDec()
            {
                char bin[9];
                //char* bin;
                //bin = new char[9];
                int dec;

                std::cout << "--------------------------------------------------|--------|\n";
                std::cout << "Please enter 8-bit Binary digits (e.g., 10100000): ";
                std::cin >> bin;
                dec = BinToDec(bin);
                std::cout << "The decimal integer of " << bin << "b is " << dec << "d\n";
                //delete[] bin;
                break;
            }
            case 2:  // How to call DecToBin()
            {
                int dec;
                char* bin;
                
                std::cout << "------------------------------------------------------------\n";
                std::cout << "Please enter a decimal integer less than 256: ";
                std::cin >> dec;

                bin = DecToBin(dec);
                std::cout << "The binary of " << dec << "d is " << bin << "b\n";
                delete[] bin;
                break;
            }
            default: // Exit if something else.
            {
                std::cout << "Bye.\n";
                quit = true;
                break;
            }
        }
        std::cout << "------------------------------------------------------------\n";
    }

    return 0;
}