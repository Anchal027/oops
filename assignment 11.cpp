#include <iostream>
using namespace std;
class Multiarray {
public:
    int a[3][3], m[3][3], i, j;

    void getdata() {
        cout << "Enter the elements of the first matrix: " << endl;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++) {
                cin >> a[i][j];
                
            }
    }
    Multiarray operator+(const Multiarray& other) {
        Multiarray result;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++) {
                result.m[i][j] = this->a[i][j] + other.m[i][j];
            }
        return result;
    }
    void displayResult() {
        cout << "\nThe sum of the matrices is:" << endl;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                cout << m[i][j] << "\t ";
            }
            cout << endl;
        }
    }
};

int main() {
    Multiarray OBJ1, OBJ3;
    OBJ1.getdata();
    OBJ3.getdata();
    OBJ3 = OBJ1 + OBJ3;
    OBJ3.displayResult();

    return 0;
}

