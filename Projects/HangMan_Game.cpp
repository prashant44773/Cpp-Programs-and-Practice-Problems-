#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<char> incorrect;

vector<char> correct;

int Gamewon = 0;

bool guess = false;
char letter;
int missess = 0;
string secret = "lonewolf";
char answer = '_';

int array[25] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//.................................................

void display(vector<char> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

void greet()
{
    system("cls");

    char var;
    system("cls");
    cout << "\n\t\tHello Welcome to the HANGMAN GAME !" << endl;
    // cout << "\n\t\tPlease Enter the Codeword that You Want To be Guessed By the Player  :\t";
    // cin >> secret;
    cout << "\n\n\t\tPress 0 To start the Game\t\t";
    cin >> var;
};

void Structure()
{
    system("cls");
    cout << "+----------------------------------+\n";
    cout << "|              HANGMAN             |\n";
    cout << "+----------------------------------+\n";

    if (missess == 0)
    {
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    if (missess == 1)
    {
        cout << "|                 |                |\n";
        cout << "|                 |                |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    if (missess == 2)
    {
        cout << "|                 |                |\n";
        cout << "|                 |                |\n";
        cout << "|                 O                |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    if (missess == 3)
    {
        cout << "|                 |                |\n";
        cout << "|                 |                |\n";
        cout << "|                 O                |\n";
        cout << "|                 |                |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    if (missess == 4)
    {
        cout << "|                 |                |\n";
        cout << "|                 |                |\n";
        cout << "|                 O                |\n";
        cout << "|               / |                |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    if (missess == 5)
    {
        cout << "|                 |                |\n";
        cout << "|                 |                |\n";
        cout << "|                 O                |\n";
        cout << "|               / | \\              |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    if (missess == 6)
    {
        cout << "|                 |                |\n";
        cout << "|                 |                |\n";
        cout << "|                 O                |\n";
        cout << "|               / | \\              |\n";
        cout << "|                /                 |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    if (missess == 7)
    {
        cout << "|                 |                |\n";
        cout << "|                 |                |\n";
        cout << "|                 O                |\n";
        cout << "|               / | \\              |\n";
        cout << "|                / \\               |\n";
        cout << "|                                  |\n";
        cout << "|                                  |\n";
    }

    //..................................................

    cout << "+----------------------------------+\n";
    cout << "|     A B C D E F G H I J K L M    |\n";
    cout << "|     N O P Q R S T U V W X Y Z    |\n";
    cout << "+----------------------------------+\n";
    cout << "|                                  |\n";
    cout << "|    MISSESS  :-   " << missess << "               |\n";
    cout << "|                                  |\n";
    cout << "+----------------------------------+\n";

    //     A B C D E F G H I J K L M
    //     N O P Q R S T U V W X Y Z
}

void status()
{
    // system("cls");

    //...................................................

    cout << "\n\nINCORRECT  GUESS'S  :  \t";

    for (int i = 0; i < secret.length(); i++)
    {
        if (letter == secret[i])
        {
            guess = false;
            correct.push_back(letter);
            // guess = false;
        }
    }
    //............................................

    if (guess)
    {
        missess++;
        incorrect.push_back(letter);
    }
    guess = true;

    

    //..............................................

    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << "  ";
    }

    // ...................................................

    cout << "\n\nCORRECT  GUESS'S  :  \t";

    // if(firstTrial)
    // {
    //     if(letter == secret[0])
    //     {
    //         array[0] = 1;
    //         firstTrial = false;
    //     }
    // }

    for (int i = 0; i < secret.length(); i++)
    {
        for (int j = 0; j < correct.size(); j++)
        {
            if (secret[i] == correct[j])
            {
                array[i] = 1;
            }
        }
    }

    for (int i = 0; i < secret.length(); i++)
    {
        if (array[i] == 1)
        {
            cout << secret[i] << "  ";
        }
        else
        {
            cout << "__  ";
        }
    }

    // ...................................................

    // ...................................................

    cout << "\n\nEnter Your Guess :\t";
    cin >> letter;

}


void EndGame()
{
    Structure();

    cout<<"\n\n\n";

    for (int i = 0; i < secret.length(); i++)
    {
        if (array[i] == 1)
        {
            cout << secret[i] << "  ";
        }
        else
        {
            cout << "__  ";
        }
    }

    cout<<"\n\n\n";


    if(Gamewon==1)
    {
        cout<<"\n\n\tCongratulations ! You Saved The Person ! You Won\n\n\n";
    }
    else
    {
        cout<<"\n\n\tYou Could'nt Save The Person ! You Lost !\n\n\n";
    }
    
}



void StartGame()
{
    greet();

    while (missess != 7)
    {
        int num = secret.length() , count=0;
        Structure();
        status();

        for(int i=0 ; i < secret.length() ; i++)
        {
            if(array[i] == 1)
            {
                count++;
            }
        }

        if(count == num)
        {
            Gamewon = 1;
            break;
        }
        count = 0;
    }

    EndGame();
}


int main()
{
    StartGame();
    return 0;
}