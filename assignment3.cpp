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
        mark = (player == 1) ? 'x' : '0';
        while (status == -1) {
            player = (player % 2 == 0) ? 2 : 1;
            mark = (player == 1) ? 'x' : '0';
            cout << "\n ENTER NUMBER for player: " << player;
            cin >> input;
            if (input < 1 || input > 9)
                cout << "INVALID DATA";
        }
    }

    void getdata() {
        board[input] = mark;
}
 
       
		void c2(){
			 void result == checkwin();
        if (result == 1) {
            cout << "Player " << player << " is the winner" << endl;
        }
        else if (result == 0) {
            cout << "It's a draw" << endl;
        }
        player++;
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

    void checkwin() {
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
            if (board[i] == 'x' || board[i] == '0') {
                count++;
            }
        }
        if (count == 9) {
            return 0;
        }
        return -1;
    }
};

int main() {
    game obj;
    cout << "\n -------TIC TAC TOE GAME-------\n";
    obj.display();
    obj.get();
    obj.getdata();
    obj.checkwin();
    return 0;
}

