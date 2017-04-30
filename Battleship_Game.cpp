#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*This is a battleship game where
 * the user fires 20 shots trying
 * to hit the enemies ships.
 */
int main() {

    string userArray[10][10];
    string coLetter;
    int row;
    int column;
    char rerun;
    int counter = 0;
    bool condition = true;

    // do...while asks the user if he wants to play again.
    do {
        // Prints out the board
        cout << "   A B C D E F G H I J" << endl;
        for (int r = 0; r < 10; r++) {
            cout << setw(2) <<  r + 1 <<setw(2);
            for (int c = 0; c < 10; c++) {
                userArray[r][c] = '*';
                cout << userArray[r][c] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for (int i = 1; i <= 20; i++) {

          // Asks the user for the coordinates
          cout << "Commander give me the coordinates (First row and then column): ";
          cin >> row;
          cin >> coLetter;
          int column = (int)(coLetter.at(0)) - 65;
          row = row -1;
          // Checks if the user gave the coorect way the coordinates
          do {
            if ((row<=9 && row >= 0) && (column <= 9 && column >= 0)) {
              condition = false;
            } else {
              condition = true;
              cout << "Write the correct coordinates (First row and then column): ";
              cin >> row;
              cin >> coLetter;
              column = (int)(coLetter.at(0)) - 65;
              row = row-1;
            }
          } while(condition !=false);

            // if statement check if the user hit any of the ships and prints out the board
            // with a hit or a miss
            if (row == 1 & column == 1 || row == 1 & column == 2 || row == 1 & column == 3 || row == 1 & column == 4 || row == 1 & column == 5) {
                counter++; // counts the shots
                //prints out the board with the hitmark
                cout << "   A B C D E F G H I J" << endl;
                for (int r = 0; r < 10; r++) {
                    cout << setw(2) <<  r + 1 <<setw(2);
                    for (int c = 0; c < 10; c++) {
                        userArray[row][column] = 'X';
                        cout << userArray[r][c] << " ";
                    }
                    cout << endl;
                }
            } else if (row == 2 & column == 8 || row == 3 & column == 8 || row == 4 & column == 8 || row == 5 & column == 8) {
                counter++;

                cout << "  A B C D E F G H I J" << endl;
                for (int r = 0; r < 10; r++) {
                    cout << setw(2) <<  r + 1 <<setw(2);
                    for (int c = 0; c < 10; c++) {
                        userArray[row][column] = 'X';
                        cout << userArray[r][c] << " ";
                    }
                    cout << endl;
                }
            } else if (row == 6 & column == 3 || row == 6 & column == 4 || row == 6 & column == 5 || row == 9 & column == 7 || row == 9 & column == 8 || row == 9 & column == 9) {
                counter++;

                cout << "   A B C D E F G H I J" << endl;
                for (int r = 0; r < 10; r++) {
                    cout << setw(2) <<  r + 1 <<setw(2);
                    for (int c = 0; c < 10; c++) {
                        userArray[row][column] = 'X';
                        cout << userArray[r][c] << " ";
                    }
                    cout << endl;
                }
            } else if (row == 6 & column == 0 || row == 7 & column == 0) {
                counter++;

                cout << "   A B C D E F G H I J"<< endl;
                for (int r = 0; r < 10; r++) {
                    cout << setw(2) <<  r + 1 <<setw(2);
                    for (int c = 0; c < 10; c++) {
                        userArray[row][column] = 'X';
                        cout << userArray[r][c] << " ";
                    }
                    cout << endl;
                }
            } else {
                cout << "   A B C D E F G H I J" << endl;
                for (int r = 0; r < 10; r++) {
                    cout << setw(2) <<  r + 1 <<setw(2);
                    for (int c = 0; c < 10; c++) {
                        userArray[row][column] = 'O';
                        cout << userArray[r][c] << " ";
                    }
                    cout << endl;
                }
            }
            // Here we check if the user has sunk all the ships.
            if (counter == 17) {
                cout << "You Defeated your Opponent!!! ";
                break;
            }
            // If the user runs out of moves the game ends.
            if (i == 20) {
                cout << "You are out of moves.\n";
                cout << "GAME OVER \n";
                break;
            }
        }

        // Reset the Counter to zero
        counter = 0;

        // Asks the user if he wants to play again.
        cout << "Would you like to execute this program again? Type in Y or y for yes, or any other letter to quit the program: "; 
        cin >> rerun;

    } while (rerun == 'y' || rerun == 'Y'); // the condition that is required to play again.

    return 0;
}
