#include <iostream>
using namespace std;

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

// function to return game status

int checkgamestatus()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

// This function wil draw the board with player mark

void board()
{
    cout << "\t\t\t ___________________"<<endl;
    cout << "\t\t\t|     |       |     | " << endl;
    cout << "\t\t\t|   "<< square[1] << " |   " << square[2] << "   |  " << square[3] <<"  |"<< endl;
    cout << "\t\t\t|_____|_______|_____|"<< endl;
    cout << "\t\t\t|     |       |     |" << endl;
    cout << "\t\t\t|   "<< square[4] << " |   " << square[5] << "   |  " << square[6] <<"  |"<<endl;
    cout << "\t\t\t|_____|_______|_____|" << endl;
    cout << "\t\t\t|     |       |     |" << endl;
    cout << "\t\t\t|   "<<square[7] << " |   " << square[8] << "   |  " << square[9] <<"  |"<<endl;
    cout << "\t\t\t|_____|_______|_____|" << endl;
}

void player1()
{

    int choice;
    cout << "\nPlayer 1 turn\tEnter you move (1-9)" << endl;
    cin >> choice;
    if (choice == 1 && square[1] == '1')
    {
        square[1] = 'X';
    }
    else if (choice == 2 && square[2] == '2')
    {
        square[2] = 'X';
    }
    else if (choice == 3 && square[3] == '3')
    {
        square[3] = 'X';
    }
    else if (choice == 4 && square[4] == '4')
    {
        square[4] = 'X';
    }
    else if (choice == 5 && square[5] == '5')
    {
        square[5] = 'X';
    }
    else if (choice == 6 && square[6] == '6')
    {
        square[6] = 'X';
    }
    else if (choice == 7 && square[7] == '7')
    {
        square[7] = 'X';
    }
    else if (choice == 8 && square[8] == '8')
    {
        square[8] = 'X';
    }
    else if (choice == 9 && square[9] == '9')
    {
        square[9] = 'X';
    }
    else
        cout << "Invalid position!" << endl;

    board();
}
void player2()
{

    int choice;
    cout << "\nPlayer 2 turn\tEnter you move (1-9)" << endl;
    cin >> choice;
    if (choice == 1 && square[1] == '1')
    {
        square[1] = '0';
    }
    else if (choice == 2 && square[2] == '2')
    {
        square[2] = '0';
    }
    else if (choice == 3 && square[3] == '3')
    {
        square[3] = '0';
    }
    else if (choice == 4 && square[4] == '4')
    {
        square[4] = '0';
    }
    else if (choice == 5 && square[5] == '5')
    {
        square[5] = '0';
    }
    else if (choice == 6 && square[6] == '6')
    {
        square[6] = '0';
    }
    else if (choice == 7 && square[7] == '7')
    {
        square[7] = '0';
    }
    else if (choice == 8 && square[8] == '8')
    {
        square[8] = '0';
    }
    else if (choice == 9 && square[9] == '9')
    {
        square[9] = '0';
    }
    else
        cout << "Invalid position!" << endl;

    board();
}
// This function give the result of game.
void result(int i)
{
    if (i == 1)
    {
        cout << "Player 1 wins!" << endl;
    }
    else if (i == 2)
    {
        cout << "Player 2 wins!" << endl;
    }
    else
        cout << "It's a Draw!" << endl;
}
int main()
{
    int status;
    cout << "Welcome to the tic toe game\n";
    board();
    cout << "Player 1 mark is X and Player 2 mark is 0\n" << endl;
    checkgamestatus();
    while (checkgamestatus() == -1)
    {
        player1();
        status = 1;
        if (checkgamestatus() == -1)
        {
            player2();
            status = 2;
        }
    }
    if (checkgamestatus() == 0)
    {
        status = 0;
    }
    cout << endl;
    result(status);
    return 0;
}
