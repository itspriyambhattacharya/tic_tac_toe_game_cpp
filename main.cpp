#include <iostream>
using namespace std;

// global variables

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}};

int current_player;
char player_input;

void drawBoard()
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

void game()
{
    int fl = 0;
    int slot;
    drawBoard();
    current_player = 1;
    while (fl == 0)
    {
        cout << "\nPlayer " << current_player << "'s turn";
        cout << "\nEnter slot:\t";
        cin >> slot;
        if (slot < 1 || slot > 9)
        {
            cout << "\nSlot out of range. Try again.\n";
            continue;
        }
    }
}

int main(void)
{
    game();
    return 0;
}