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

void swap_player_input()
{
    if (current_player == 1)
    {
        current_player = 2;
    }
    else
    {
        current_player = 1;
    }
    if (player_input == 'X')
    {
        player_input = 'O';
    }
    else
    {
        player_input = 'X';
    }
}

int game_winner()
{
    // left diagonal check
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return current_player;

    // right diagonal check
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return current_player;
    }

    // row check
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return current_player;
        }
    }

    // column check
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return current_player;
        }
    }
    return 0;
}

void game_logic()
{
    int slot;   // to store the position in the game board where user will give input
    char input; // to store the input that user will give
    int winner; // to store the winner player

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
    for (int i = 1; i <= 9; i++)
    {
        cout << "\nPlayer " << current_player << "'s turn";
        cout << "\nEnter slot:\t";
        cin >> slot;
        if (slot < 1 || slot > 9)
        {
            i--;
            cout << "\nSlot out of range. Try again.\n";
            continue;
        }
        int res = placeSlot(slot);
        if (res == 0)
        {
            i--;
            cout << "\nSlot Occupied. Try again.\n";
            continue;
        }
        drawBoard();
        winner = game_winner();
        if (winner == 1)
        {
            cout << "\nPlayer 1 is winner.\n";
            break;
        }
        else if (winner == 2)
        {
            cout << "\nPlayer 2 is winner.\n";
            break;
        }

        swap_player_input();
    }
    if (winner == 0)
    {
        cout << "\nTie\n";
    }
}

int main(void)
{
    game_logic();
    return 0;
}