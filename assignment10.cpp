#include<iostream>
using namespace std;
class library{
public:
		int i,arr[3];
		double a;
			void getdata(){
			cout<<"Enter the ISBN code to find book in library: ";
			cin>>a;
			if (a==1234567890123)
			{
				cout<<"BOOK IS FOUND!!!"<<endl;
				cout<<"BOOK NAME IS :Learn C++ Programming"<<endl;
				cout<<"AUTHOR: Bjarne Stroustrup"<<endl;
			}
			else if (a==9012345678901){
				cout<<"BOOK IS FOUND!!!"<<endl;
				cout<<"BOOK NAME IS :Networking Fundamentals"<<endl;
				cout<<"AUTHOR:Richard.M Roberts" <<endl;
			}
			else if (a==8901234567890){
				cout<<"BOOK IS FOUND!!!"<<endl;
				cout<<"BOOK NAME IS :Software Engineering"<<endl;
				cout<<"AUTHOR:Deepak Jain"<<endl;
			}
			else 
			cout<<"BOOK IS NOT FOUND!!"<<endl;
    	}
};
int main(){
	library obj;
	cout<<"WELCOME TO OUR SMALL LIBRARY:)"<<endl;
	obj.getdata();
	return 0;
}
