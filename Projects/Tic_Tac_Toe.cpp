#include <iostream>

using namespace std;

char var[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int count = 0;

char player1;
char player2;
char sign1 = 'X';
char sign2 = 'O';

void play();


void Selector()
{
    int num;
    system("cls");
    cout << "\tWELCOME TO TIC TAC TOE" << endl;
    cout << "\n\nChoose Your Sign Player 1 & Player 2" << endl
         << endl
         << "1. [X]" << endl
         << "2. [0]" << endl;
    cout << endl
         << "Enter Your choice Player1  :  ";
    cin >> num;

    if (num == 1)
    {
        player1 = sign1;
        player2 = sign2;
    }
    else
    {
        player1 = sign2;
        player2 = sign1;
    }
}

void Board()
{
    system("cls");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<var[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout << "      |      |      " << endl;
    cout << "   " << var[0][0] << "  |  " << var[0][1] << "   |  " << var[0][2] << "   " << endl;
    cout << "______|______|______" << endl;
    cout << "      |      |      " << endl;
    cout << "   " << var[1][0] << "  |  " << var[1][1] << "   |  " << var[1][2] << "   " << endl;
    cout << "______|______|______" << endl;
    cout << "      |      |      " << endl;
    cout << "   " << var[2][0] << "  |  " << var[2][1] << "   |  " << var[2][2] << "   " << endl;
    cout << "      |      |      " << endl;
}

void Input()
{
    int variable;
    char turn;
    if (count % 2 == 0)
    {
        cout << "Player 1 Turn :  ";
        cin >> variable;
        turn = player1;
    }
    else
    {
        cout << "Player 2 Turn :  ";
        cin >> variable;
        turn = player2;
    }
    count++;

    if (variable == 1 && var[0][0] == '1')
    {
        var[0][0] = turn;
    }
    else if (variable == 2 && var[0][1] == '2')
    {
        var[0][1] = turn;
    }
    else if (variable == 3 && var[0][2] == '3')
    {
        var[0][2] = turn;
    }
    else if (variable == 4 && var[1][0] == '4')
    {
        var[1][0] = turn;
    }
    else if (variable == 5 && var[1][1] == '5')
    {
        var[1][1] = turn;
    }
    else if (variable == 6 && var[1][2] == '6')
    {
        var[1][2] = turn;
    }
    else if (variable == 7 && var[2][0] == '7')
    {
        var[2][0] = turn;
    }
    else if (variable == 8 && var[2][1] == '8')
    {
        var[2][1] = turn;
    }
    if (variable == 9 && var[2][2] == '9')
    {
        var[2][2] = turn;
    }
    // else
    // {
    //     cout<<"Invalid Input"<<endl;
    // }
}

int checkwin()
{

    if (var[0][0] == var[0][1] && var[0][1] == var[0][2])
    {
        return 1;
    }
    else if (var[1][0] == var[1][1] && var[1][1] == var[1][2])
    {
        return 1;
    }
    else if (var[2][0] == var[2][1] && var[2][1] == var[2][2]) // horizontal
    {
        return 1;
    }
    else if (var[0][0] == var[1][0] && var[1][0] == var[2][0]) // vertical
    {
        return 1;
    }
    else if (var[0][1] == var[1][1] && var[1][1] == var[2][1])
    {
        return 1;
    }
    else if (var[0][2] == var[1][2] && var[1][2] == var[2][2])
    {
        return 1;
    }
    else if (var[0][0] == var[1][1] && var[1][1] == var[2][2]) // diagonal
    {
        return 1;
    }
    else if (var[0][2] == var[1][1] && var[1][1] == var[2][0]) // diagonal
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void DeclareWinner()
{
    system("cls");
    if (count % 2 == 0)
    {
        cout << "\n\n\n\t\tThe Winner is Player 2\n\n\n" << endl;
    }
    else
    {
        cout << "\n\n\n\t\tThe Winner is Player 1\n\n\n" << endl;
    }

    int a;

    cout<<"Press 0 To  play again   ";
    cin>>a;
    
    if(a == 0)
    {
        play();
    }
    else
    {
        play();
    }

}

void play()
{
    Selector();
    do
    {
        Board();
        Input();
    } while (!checkwin());
    DeclareWinner();
}

int main()
{
    play();
    return 0;
}