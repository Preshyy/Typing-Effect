// Typing Effect.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/** Typing effect simulator
* This program simulates a typing effect for strings or numbers displayed on the console.
* This will be a blueprint program for this effect to be used in future projects/programs.
*/

// Including the necessary libraries
#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;

// Defining a function to set the cursor position
void gotoxy(int x, int y) {
    printf("\x1b[%d;%df", y, x); // ANSI escape code for setting the cursor position on the console.
}

// Function to simulate the typing effect
void typeText(const string& text, int delay) {
    for (char c : text) {
        cout << c << flush; // Prints character without buffering
        this_thread::sleep_for(chrono::milliseconds(delay)); // Initiates a delay
    }
}

// Main function
int main()
{
    int consoleWidth = 80;
    int middle = consoleWidth / 2;

    string sentence = "Hello, this is a typing effect example.\n";
    int delay = 150; // Delay measured in milliseconds between each character

    // Deriving starting position at the middle of the console
    int startX = middle - sentence.length() / 2; // Horizontal position
    int startY = 1; // Vertical position

    gotoxy(startX, startY);
    typeText(sentence, delay);

    // Displaying a termination message
    int terminationY = startY + 2;
    gotoxy(middle - 20, terminationY);
    string sentence1 = "Press any key to end the program.";
    typeText(sentence1, delay);
    _getch(); // Waits for user input

    return 0;
}


