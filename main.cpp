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

int placeSlot(int slot)
{
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = player_input;
        return 1;
    }
    else
    {
        return 0;
    }
}

void game()
{
    int fl = 0;
    int slot;
    char input;
    cout << "\nPlayer 1, choose your input (X or O)\n";
    fflush(stdin);
    cin >> input;
    current_player = 1;
    player_input = input;

    if (input == 'X')
    {
        input = 'O';
    }
    else
    {
        input = 'X';
    }

    drawBoard();
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
        int res = placeSlot(slot);
        if (res == 0)
        {
            cout << "\nSlot Occupied. Try again.\n";
            continue;
        }
        drawBoard();
    }
}

int main(void)
{
    game();
    return 0;
}