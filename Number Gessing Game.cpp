#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed for random number generation
    srand(time(0));

    int lowerBound, upperBound, targetNumber, userGuess, attempts, remainingAttempts;

    // Get the range from the user
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Enter the lower bound of the range: ";
    cin >> lowerBound;
    cout << "Enter the upper bound of the range: ";
    cin >> upperBound;

    // Generate a random number between the lower and upper bounds
    targetNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;

    // Ask the user for the number of attempts
    cout << "Enter the number of attempts: ";
    cin >> attempts;
    remainingAttempts = attempts;

    // Game loop
    while (remainingAttempts > 0) {
        cout << "\nYou have " << remainingAttempts << " attempts left." << endl;
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Check if the user's guess is correct, too low, or too high
        if (userGuess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > targetNumber) {
            cout << "Too high! Try again

