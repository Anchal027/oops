#include<iostream>
using namespace std;

class game {
private:
    int player = 1;
    int input;
    int status = -1;
    char mark;  
    char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

public:
   void get() {
    mark = (player == 1) ? 'X' : 'O';
    while (status == -1) {
        player = (player % 2 == 0) ? 2 : 1;
        mark = (player == 1) ? 'X' : 'O';
        cout << "\n ENTER NUMBER for player " << player << ": ";
        cin >> input;
        if (input < 1 || input > 9 || board[input] == 'X' || board[input] == 'O') {
            cout << "INVALID MOVE. Try again.";
            status = -1;  // Reset status to -1 for the same player to try again
        }
        else {
            status = 1;
        }
    }
}

    void getdata() {
        board[input] = mark;
    }
 
    void c2() {
        int result = checkwin();
        display();
        if (result == 1) {
            cout << "Player " << player << " is the winner!" << endl;
        }
        else if (result == 0) {
            cout << "It's a draw!" << endl;
        }
        else {
            player++;
        }
    }

    void display() {
        cout << "\n    |    | \n";
        cout << "  " << board[1] << " | " << board[2] << "  | " << board[3] << "\n";
        cout << "____|____|____\n";
        cout << "    |    | \n";
        cout << "  " << board[4] << " | " << board[5] << "  | " << board[6] << "\n";
        cout << "____|____|____\n";
        cout << "    |    | \n";
        cout << "  " << board[7] << " | " << board[8] << "  | " << board[9] << "\n";
        cout << "    |    | \n";
    }

    int checkwin() {
        if (board[1] == board[2] && board[2] == board[3]) {
            return 1;
        }
        if (board[1] == board[4] && board[4] == board[7]) {
            return 1;
        }
        if (board[7] == board[8] && board[8] == board[9]) {
            return 1;
        }
        if (board[3] == board[6] && board[6] == board[9]) {
            return 1;
        }
        if (board[1] == board[5] && board[5] == board[9]) {
            return 1;
        }
        if (board[3] == board[5] && board[5] == board[7]) {
            return 1;
        }
        if (board[2] == board[5] && board[5] == board[8]) {
            return 1;
        }
        if (board[4] == board[5] && board[5] == board[6]) {
            return 1;
        }

        int count = 0;
        for (int i = 1; i <= 9; i++) {
            if (board[i] == 'X' || board[i] == 'O') {
                count++;
            }
        }
        if (count == 9) {
            return 0; // Draw
        }
        return -1; // Continue the game
    }
};

int main() {
    game obj;
    cout << "\n -------TIC TAC TOE GAME-------\n";
    int turn = 1;
    do {
        obj.display();
        obj.get();
        obj.getdata();
        obj.c2();
        turn++;
    } while (obj.checkwin() == -1);
    return 0;
}

