#include <iostream>
using namespace std;
class series{
	private:
		int n;
		public:
			void getdata(){
    cout << "Enter the number of terms to compute the sum of series: ";
    cin >> n;
	int p = 0;
    int q = 0;
	 cout << "Sum of Series: ";
    for (int i = 1; i <= n; ++i) {
        p+= i;  
        q += p;  
        cout << p;
        if(i != n) {
            cout << " + ";
        }
    }
    cout << " = " << q << endl;
}
};
int main() {
    series obj;
    obj.getdata();
    return 0;
}

