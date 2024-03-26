#include<iostream>
using namespace std;
class sample {
public:
    typedef int (sample::*Operation)(int);

    int Compute(Operation op, int n) {
        return (this->*op)(n);
    }

    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char *argv[]) {
    sample obj;

    int result = obj.Compute(&sample::findFactorial, 5);
    cout << "Factorial Result: " << result << endl;
  
    result = obj.Compute(&sample::findSquare, 4);
    cout << "Square Result: " << result << endl;
    
    result = obj.Compute(&sample::findCube, 3);
    cout << "Cube Result: " << result << endl;

    return 0;
}

